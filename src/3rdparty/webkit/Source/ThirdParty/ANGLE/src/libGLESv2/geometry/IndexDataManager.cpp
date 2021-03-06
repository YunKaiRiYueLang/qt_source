//
// Copyright (c) 2002-2010 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// geometry/IndexDataManager.cpp: Defines the IndexDataManager, a class that
// runs the Buffer translation process for index buffers.

#include "libGLESv2/geometry/IndexDataManager.h"

#include "common/debug.h"

#include "libGLESv2/Buffer.h"
#include "libGLESv2/mathutil.h"
#include "libGLESv2/main.h"

namespace
{
    enum { INITIAL_INDEX_BUFFER_SIZE = 4096 * sizeof(GLuint) };
}

namespace gl
{

IndexDataManager::IndexDataManager(Context *context, IDirect3DDevice9 *device) : mDevice(device)
{
    mStreamingBufferShort = new StreamingIndexBuffer(mDevice, INITIAL_INDEX_BUFFER_SIZE, D3DFMT_INDEX16);

    if (context->supports32bitIndices())
    {
        mStreamingBufferInt = new StreamingIndexBuffer(mDevice, INITIAL_INDEX_BUFFER_SIZE, D3DFMT_INDEX32);
    }
    else
    {
        mStreamingBufferInt = NULL;
    }
}

IndexDataManager::~IndexDataManager()
{
    delete mStreamingBufferShort;
    delete mStreamingBufferInt;
}

void convertIndices(GLenum type, const void *input, GLsizei count, void *output)
{
    if (type == GL_UNSIGNED_BYTE)
    {
        const GLubyte *in = static_cast<const GLubyte*>(input);
        GLushort *out = static_cast<GLushort*>(output);

        for (GLsizei i = 0; i < count; i++)
        {
            out[i] = in[i];
        }
    }
    else if (type == GL_UNSIGNED_INT)
    {
        memcpy(output, input, count * sizeof(GLuint));
    }
    else if (type == GL_UNSIGNED_SHORT)
    {
        memcpy(output, input, count * sizeof(GLushort));
    }
    else UNREACHABLE();
}

template <class IndexType>
void computeRange(const IndexType *indices, GLsizei count, GLuint *minIndex, GLuint *maxIndex)
{
    *minIndex = indices[0];
    *maxIndex = indices[0];

    for (GLsizei i = 0; i < count; i++)
    {
        if (*minIndex > indices[i]) *minIndex = indices[i];
        if (*maxIndex < indices[i]) *maxIndex = indices[i];
    }
}

void computeRange(GLenum type, const void *indices, GLsizei count, GLuint *minIndex, GLuint *maxIndex)
{
    if (type == GL_UNSIGNED_BYTE)
    {
        computeRange(static_cast<const GLubyte*>(indices), count, minIndex, maxIndex);
    }
    else if (type == GL_UNSIGNED_INT)
    {
        computeRange(static_cast<const GLuint*>(indices), count, minIndex, maxIndex);
    }
    else if (type == GL_UNSIGNED_SHORT)
    {
        computeRange(static_cast<const GLushort*>(indices), count, minIndex, maxIndex);
    }
    else UNREACHABLE();
}

GLenum IndexDataManager::prepareIndexData(GLenum type, GLsizei count, Buffer *buffer, const void *indices, TranslatedIndexData *translated)
{
    D3DFORMAT format = (type == GL_UNSIGNED_INT) ? D3DFMT_INDEX32 : D3DFMT_INDEX16;
    intptr_t offset = reinterpret_cast<intptr_t>(indices);
    bool alignedOffset = false;

    if (buffer != NULL)
    {
        switch (type)
        {
          case GL_UNSIGNED_BYTE:  alignedOffset = (offset % sizeof(GLubyte) == 0);  break;
          case GL_UNSIGNED_SHORT: alignedOffset = (offset % sizeof(GLushort) == 0); break;
          case GL_UNSIGNED_INT:   alignedOffset = (offset % sizeof(GLuint) == 0);   break;
          default: UNREACHABLE(); alignedOffset = false;
        }

        if (typeSize(type) * count + offset > static_cast<std::size_t>(buffer->size()))
        {
            return GL_INVALID_OPERATION;
        }

        indices = static_cast<const GLubyte*>(buffer->data()) + offset;
    }

    StreamingIndexBuffer *streamingBuffer = (type == GL_UNSIGNED_INT) ? mStreamingBufferInt : mStreamingBufferShort;

    StaticIndexBuffer *staticBuffer = buffer ? buffer->getIndexBuffer() : NULL;
    IndexBuffer *indexBuffer = streamingBuffer;
    UINT streamOffset = 0;

    if (staticBuffer && staticBuffer->lookupType(type) && alignedOffset)
    {
        indexBuffer = staticBuffer;
        streamOffset = staticBuffer->lookupRange(offset, count, &translated->minIndex, &translated->maxIndex);

        if (streamOffset == -1)
        {
            streamOffset = (offset / typeSize(type)) * indexSize(format);
            computeRange(type, indices, count, &translated->minIndex, &translated->maxIndex);
            staticBuffer->addRange(offset, count, translated->minIndex, translated->maxIndex, streamOffset);
        }
    }
    else
    {
        int convertCount = count;

        if (staticBuffer)
        {
            if (staticBuffer->size() == 0 && alignedOffset)
            {
                indexBuffer = staticBuffer;
                convertCount = buffer->size() / typeSize(type);
            }
            else
            {
                buffer->invalidateStaticData();
                staticBuffer = NULL;
            }
        }

        void *output = NULL;
        
        if (indexBuffer)
        {
            indexBuffer->reserveSpace(convertCount * indexSize(format), type);
            output = indexBuffer->map(indexSize(format) * convertCount, &streamOffset);
        }
        
        if (output == NULL)
        {
            ERR("Failed to map index buffer.");
            return GL_OUT_OF_MEMORY;
        }

        convertIndices(type, staticBuffer ? buffer->data() : indices, convertCount, output);
        indexBuffer->unmap();

        computeRange(type, indices, count, &translated->minIndex, &translated->maxIndex);

        if (staticBuffer)
        {
            streamOffset = (offset / typeSize(type)) * indexSize(format);
            staticBuffer->addRange(offset, count, translated->minIndex, translated->maxIndex, streamOffset);
        }
    }

    translated->indexBuffer = indexBuffer->getBuffer();
    translated->startIndex = streamOffset / indexSize(format);

    return GL_NO_ERROR;
}

std::size_t IndexDataManager::indexSize(D3DFORMAT format) const
{
    return (format == D3DFMT_INDEX32) ? sizeof(unsigned int) : sizeof(unsigned short);
}

std::size_t IndexDataManager::typeSize(GLenum type) const
{
    switch (type)
    {
      case GL_UNSIGNED_INT:   return sizeof(GLuint);
      case GL_UNSIGNED_SHORT: return sizeof(GLushort);
      case GL_UNSIGNED_BYTE:  return sizeof(GLubyte);
      default: UNREACHABLE(); return sizeof(GLushort);
    }
}

IndexBuffer::IndexBuffer(IDirect3DDevice9 *device, UINT size, D3DFORMAT format) : mDevice(device), mBufferSize(size), mIndexBuffer(NULL)
{
    if (size > 0)
    {
        D3DPOOL pool = getDisplay()->getBufferPool(D3DUSAGE_DYNAMIC | D3DUSAGE_WRITEONLY);
        HRESULT result = device->CreateIndexBuffer(size, D3DUSAGE_DYNAMIC | D3DUSAGE_WRITEONLY, format, pool, &mIndexBuffer, NULL);

        if (FAILED(result))
        {
            ERR("Out of memory allocating an index buffer of size %lu.", size);
        }
    }
}

IndexBuffer::~IndexBuffer()
{
    if (mIndexBuffer)
    {
        mIndexBuffer->Release();
    }
}

IDirect3DIndexBuffer9 *IndexBuffer::getBuffer() const
{
    return mIndexBuffer;
}

void IndexBuffer::unmap()
{
    if (mIndexBuffer)
    {
        mIndexBuffer->Unlock();
    }
}

StreamingIndexBuffer::StreamingIndexBuffer(IDirect3DDevice9 *device, UINT initialSize, D3DFORMAT format) : IndexBuffer(device, initialSize, format)
{
    mWritePosition = 0;
}

StreamingIndexBuffer::~StreamingIndexBuffer()
{
}

void *StreamingIndexBuffer::map(UINT requiredSpace, UINT *offset)
{
    void *mapPtr = NULL;

    if (mIndexBuffer)
    {
        HRESULT result = mIndexBuffer->Lock(mWritePosition, requiredSpace, &mapPtr, D3DLOCK_NOOVERWRITE);
     
        if (FAILED(result))
        {
            ERR(" Lock failed with error 0x%08x", result);
            return NULL;
        }

        *offset = mWritePosition;
        mWritePosition += requiredSpace;
    }

    return mapPtr;
}

void StreamingIndexBuffer::reserveSpace(UINT requiredSpace, GLenum type)
{
    if (requiredSpace > mBufferSize)
    {
        if (mIndexBuffer)
        {
            mIndexBuffer->Release();
            mIndexBuffer = NULL;
        }

        mBufferSize = std::max(requiredSpace, 2 * mBufferSize);

        D3DPOOL pool = getDisplay()->getBufferPool(D3DUSAGE_DYNAMIC | D3DUSAGE_WRITEONLY);
        HRESULT result = mDevice->CreateIndexBuffer(mBufferSize, D3DUSAGE_DYNAMIC | D3DUSAGE_WRITEONLY, type == GL_UNSIGNED_INT ? D3DFMT_INDEX32 : D3DFMT_INDEX16, pool, &mIndexBuffer, NULL);
    
        if (FAILED(result))
        {
            ERR("Out of memory allocating a vertex buffer of size %lu.", mBufferSize);
        }

        mWritePosition = 0;
    }
    else if (mWritePosition + requiredSpace > mBufferSize)   // Recycle
    {
        void *dummy;
        mIndexBuffer->Lock(0, 1, &dummy, D3DLOCK_DISCARD);
        mIndexBuffer->Unlock();

        mWritePosition = 0;
    }
}

StaticIndexBuffer::StaticIndexBuffer(IDirect3DDevice9 *device) : IndexBuffer(device, 0, D3DFMT_UNKNOWN)
{
    mCacheType = GL_NONE;
}

StaticIndexBuffer::~StaticIndexBuffer()
{
}

void *StaticIndexBuffer::map(UINT requiredSpace, UINT *offset)
{
    void *mapPtr = NULL;

    if (mIndexBuffer)
    {
        HRESULT result = mIndexBuffer->Lock(0, requiredSpace, &mapPtr, 0);
     
        if (FAILED(result))
        {
            ERR(" Lock failed with error 0x%08x", result);
            return NULL;
        }

        *offset = 0;
    }

    return mapPtr;
}

void StaticIndexBuffer::reserveSpace(UINT requiredSpace, GLenum type)
{
    if (!mIndexBuffer && mBufferSize == 0)
    {
        D3DPOOL pool = getDisplay()->getBufferPool(D3DUSAGE_WRITEONLY);
        HRESULT result = mDevice->CreateIndexBuffer(requiredSpace, D3DUSAGE_WRITEONLY, type == GL_UNSIGNED_INT ? D3DFMT_INDEX32 : D3DFMT_INDEX16, pool, &mIndexBuffer, NULL);
    
        if (FAILED(result))
        {
            ERR("Out of memory allocating a vertex buffer of size %lu.", mBufferSize);
        }

        mBufferSize = requiredSpace;
        mCacheType = type;
    }
    else if (mIndexBuffer && mBufferSize >= requiredSpace && mCacheType == type)
    {
        // Already allocated
    }
    else UNREACHABLE();   // Static index buffers can't be resized
}

bool StaticIndexBuffer::lookupType(GLenum type)
{
    return mCacheType == type;
}

UINT StaticIndexBuffer::lookupRange(intptr_t offset, GLsizei count, UINT *minIndex, UINT *maxIndex)
{
    for (unsigned int range = 0; range < mCache.size(); range++)
    {
        if (mCache[range].offset == offset && mCache[range].count == count)
        {
            *minIndex = mCache[range].minIndex;
            *maxIndex = mCache[range].maxIndex;

            return mCache[range].streamOffset;
        }
    }

    return -1;
}

void StaticIndexBuffer::addRange(intptr_t offset, GLsizei count, UINT minIndex, UINT maxIndex, UINT streamOffset)
{
    IndexRange indexRange = {offset, count, minIndex, maxIndex, streamOffset};
    mCache.push_back(indexRange);
}

}
