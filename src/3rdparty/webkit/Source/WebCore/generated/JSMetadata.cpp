/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(FILE_SYSTEM)

#include "JSMetadata.h"

#include "Metadata.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMetadata);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMetadataTableValues[3] =
{
    { "modificationTime", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMetadataModificationTime), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMetadataConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMetadataTable = { 4, 3, JSMetadataTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMetadataConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMetadataConstructorTable = { 1, 0, JSMetadataConstructorTableValues, 0 };
class JSMetadataConstructor : public DOMConstructorObject {
public:
    JSMetadataConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSMetadataConstructor::s_info = { "MetadataConstructor", &DOMConstructorObject::s_info, &JSMetadataConstructorTable, 0 };

JSMetadataConstructor::JSMetadataConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSMetadataPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSMetadataConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMetadataConstructor, JSDOMWrapper>(exec, &JSMetadataConstructorTable, this, propertyName, slot);
}

bool JSMetadataConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMetadataConstructor, JSDOMWrapper>(exec, &JSMetadataConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMetadataPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMetadataPrototypeTable = { 1, 0, JSMetadataPrototypeTableValues, 0 };
static const HashTable* getJSMetadataPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSMetadataPrototypeTable);
}

const ClassInfo JSMetadataPrototype::s_info = { "MetadataPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSMetadataPrototypeTable };

JSObject* JSMetadataPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMetadata>(exec, globalObject);
}

static const HashTable* getJSMetadataTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSMetadataTable);
}

const ClassInfo JSMetadata::s_info = { "Metadata", &JSDOMWrapper::s_info, 0, getJSMetadataTable };

JSMetadata::JSMetadata(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Metadata> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSMetadata::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSMetadataPrototype(exec->globalData(), globalObject, JSMetadataPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSMetadata::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMetadata, Base>(exec, getJSMetadataTable(exec), this, propertyName, slot);
}

bool JSMetadata::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSMetadata, Base>(exec, getJSMetadataTable(exec), this, propertyName, descriptor);
}

JSValue jsMetadataModificationTime(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMetadata* castedThis = static_cast<JSMetadata*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Metadata* imp = static_cast<Metadata*>(castedThis->impl());
    JSValue result = jsDateOrNull(exec, imp->modificationTime());
    return result;
}


JSValue jsMetadataConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSMetadata* domObject = static_cast<JSMetadata*>(asObject(slotBase));
    return JSMetadata::getConstructor(exec, domObject->globalObject());
}

JSValue JSMetadata::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMetadataConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Metadata* impl)
{
    return wrap<JSMetadata>(exec, globalObject, impl);
}

Metadata* toMetadata(JSC::JSValue value)
{
    return value.inherits(&JSMetadata::s_info) ? static_cast<JSMetadata*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)
