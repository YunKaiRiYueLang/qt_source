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
#include "JSTreeWalker.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSNodeFilter.h"
#include "Node.h"
#include "NodeFilter.h"
#include "TreeWalker.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTreeWalker);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSTreeWalkerTableValues[7] =
{
    { "root", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerRoot), (intptr_t)0 THUNK_GENERATOR(0) },
    { "whatToShow", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerWhatToShow), (intptr_t)0 THUNK_GENERATOR(0) },
    { "filter", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerFilter), (intptr_t)0 THUNK_GENERATOR(0) },
    { "expandEntityReferences", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerExpandEntityReferences), (intptr_t)0 THUNK_GENERATOR(0) },
    { "currentNode", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerCurrentNode), (intptr_t)setJSTreeWalkerCurrentNode THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTreeWalkerConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTreeWalkerTable = { 18, 15, JSTreeWalkerTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSTreeWalkerConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTreeWalkerConstructorTable = { 1, 0, JSTreeWalkerConstructorTableValues, 0 };
class JSTreeWalkerConstructor : public DOMConstructorObject {
public:
    JSTreeWalkerConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSTreeWalkerConstructor::s_info = { "TreeWalkerConstructor", &DOMConstructorObject::s_info, &JSTreeWalkerConstructorTable, 0 };

JSTreeWalkerConstructor::JSTreeWalkerConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSTreeWalkerPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSTreeWalkerConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTreeWalkerConstructor, JSDOMWrapper>(exec, &JSTreeWalkerConstructorTable, this, propertyName, slot);
}

bool JSTreeWalkerConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTreeWalkerConstructor, JSDOMWrapper>(exec, &JSTreeWalkerConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSTreeWalkerPrototypeTableValues[8] =
{
    { "parentNode", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionParentNode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "firstChild", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionFirstChild), (intptr_t)0 THUNK_GENERATOR(0) },
    { "lastChild", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionLastChild), (intptr_t)0 THUNK_GENERATOR(0) },
    { "previousSibling", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionPreviousSibling), (intptr_t)0 THUNK_GENERATOR(0) },
    { "nextSibling", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionNextSibling), (intptr_t)0 THUNK_GENERATOR(0) },
    { "previousNode", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionPreviousNode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "nextNode", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTreeWalkerPrototypeFunctionNextNode), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTreeWalkerPrototypeTable = { 16, 15, JSTreeWalkerPrototypeTableValues, 0 };
const ClassInfo JSTreeWalkerPrototype::s_info = { "TreeWalkerPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSTreeWalkerPrototypeTable, 0 };

JSObject* JSTreeWalkerPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTreeWalker>(exec, globalObject);
}

bool JSTreeWalkerPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSTreeWalkerPrototypeTable, this, propertyName, slot);
}

bool JSTreeWalkerPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSTreeWalkerPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSTreeWalker::s_info = { "TreeWalker", &JSDOMWrapper::s_info, &JSTreeWalkerTable, 0 };

JSTreeWalker::JSTreeWalker(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TreeWalker> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSTreeWalker::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSTreeWalkerPrototype(exec->globalData(), globalObject, JSTreeWalkerPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSTreeWalker::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTreeWalker, Base>(exec, &JSTreeWalkerTable, this, propertyName, slot);
}

bool JSTreeWalker::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTreeWalker, Base>(exec, &JSTreeWalkerTable, this, propertyName, descriptor);
}

JSValue jsTreeWalkerRoot(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->root()));
    return result;
}


JSValue jsTreeWalkerWhatToShow(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());
    JSValue result = jsNumber(imp->whatToShow());
    return result;
}


JSValue jsTreeWalkerFilter(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->filter()));
    return result;
}


JSValue jsTreeWalkerExpandEntityReferences(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());
    JSValue result = jsBoolean(imp->expandEntityReferences());
    return result;
}


JSValue jsTreeWalkerCurrentNode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->currentNode()));
    return result;
}


JSValue jsTreeWalkerConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTreeWalker* domObject = static_cast<JSTreeWalker*>(asObject(slotBase));
    return JSTreeWalker::getConstructor(exec, domObject->globalObject());
}

void JSTreeWalker::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSTreeWalker, Base>(exec, propertyName, value, &JSTreeWalkerTable, this, slot);
}

void setJSTreeWalkerCurrentNode(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(thisObject);
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setCurrentNode(toNode(value), ec);
    setDOMException(exec, ec);
}


JSValue JSTreeWalker::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTreeWalkerConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionParentNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTreeWalker::s_info))
        return throwVMTypeError(exec);
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(thisValue));
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->parentNode(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionFirstChild(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTreeWalker::s_info))
        return throwVMTypeError(exec);
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(thisValue));
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->firstChild(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionLastChild(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTreeWalker::s_info))
        return throwVMTypeError(exec);
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(thisValue));
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->lastChild(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionPreviousSibling(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTreeWalker::s_info))
        return throwVMTypeError(exec);
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(thisValue));
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->previousSibling(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionNextSibling(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTreeWalker::s_info))
        return throwVMTypeError(exec);
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(thisValue));
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nextSibling(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionPreviousNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTreeWalker::s_info))
        return throwVMTypeError(exec);
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(thisValue));
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->previousNode(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionNextNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTreeWalker::s_info))
        return throwVMTypeError(exec);
    JSTreeWalker* castedThis = static_cast<JSTreeWalker*>(asObject(thisValue));
    TreeWalker* imp = static_cast<TreeWalker*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nextNode(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TreeWalker* impl)
{
    return wrap<JSTreeWalker>(exec, globalObject, impl);
}

TreeWalker* toTreeWalker(JSC::JSValue value)
{
    return value.inherits(&JSTreeWalker::s_info) ? static_cast<JSTreeWalker*>(asObject(value))->impl() : 0;
}

}
