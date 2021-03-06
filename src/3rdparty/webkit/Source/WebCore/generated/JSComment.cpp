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
#include "JSComment.h"

#include "Comment.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSComment);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCommentTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCommentConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCommentTable = { 2, 1, JSCommentTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCommentConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCommentConstructorTable = { 1, 0, JSCommentConstructorTableValues, 0 };
class JSCommentConstructor : public DOMConstructorObject {
public:
    JSCommentConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSCommentConstructor::s_info = { "CommentConstructor", &DOMConstructorObject::s_info, &JSCommentConstructorTable, 0 };

JSCommentConstructor::JSCommentConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSCommentPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCommentConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCommentConstructor, JSDOMWrapper>(exec, &JSCommentConstructorTable, this, propertyName, slot);
}

bool JSCommentConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCommentConstructor, JSDOMWrapper>(exec, &JSCommentConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCommentPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCommentPrototypeTable = { 1, 0, JSCommentPrototypeTableValues, 0 };
const ClassInfo JSCommentPrototype::s_info = { "CommentPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCommentPrototypeTable, 0 };

JSObject* JSCommentPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSComment>(exec, globalObject);
}

const ClassInfo JSComment::s_info = { "Comment", &JSCharacterData::s_info, &JSCommentTable, 0 };

JSComment::JSComment(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Comment> impl)
    : JSCharacterData(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSComment::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCommentPrototype(exec->globalData(), globalObject, JSCommentPrototype::createStructure(exec->globalData(), JSCharacterDataPrototype::self(exec, globalObject)));
}

bool JSComment::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSComment, Base>(exec, &JSCommentTable, this, propertyName, slot);
}

bool JSComment::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSComment, Base>(exec, &JSCommentTable, this, propertyName, descriptor);
}

JSValue jsCommentConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSComment* domObject = static_cast<JSComment*>(asObject(slotBase));
    return JSComment::getConstructor(exec, domObject->globalObject());
}

JSValue JSComment::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCommentConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
