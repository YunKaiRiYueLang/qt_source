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
#include "JSNodeList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "Node.h"
#include "NodeList.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSNodeList);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNodeListTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeListLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeListConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNodeListTable = { 5, 3, JSNodeListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNodeListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNodeListConstructorTable = { 1, 0, JSNodeListConstructorTableValues, 0 };
class JSNodeListConstructor : public DOMConstructorObject {
public:
    JSNodeListConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSNodeListConstructor::s_info = { "NodeListConstructor", &DOMConstructorObject::s_info, &JSNodeListConstructorTable, 0 };

JSNodeListConstructor::JSNodeListConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSNodeListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSNodeListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeListConstructor, JSDOMWrapper>(exec, &JSNodeListConstructorTable, this, propertyName, slot);
}

bool JSNodeListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSNodeListConstructor, JSDOMWrapper>(exec, &JSNodeListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSNodeListPrototypeTableValues[2] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsNodeListPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSNodeListPrototypeTable = { 2, 1, JSNodeListPrototypeTableValues, 0 };
const ClassInfo JSNodeListPrototype::s_info = { "NodeListPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSNodeListPrototypeTable, 0 };

JSObject* JSNodeListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNodeList>(exec, globalObject);
}

bool JSNodeListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSNodeListPrototypeTable, this, propertyName, slot);
}

bool JSNodeListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSNodeListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSNodeList::s_info = { "NodeList", &JSDOMWrapper::s_info, &JSNodeListTable, 0 };

JSNodeList::JSNodeList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<NodeList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSNodeList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSNodeListPrototype(exec->globalData(), globalObject, JSNodeListPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSNodeList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSNodeListTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<NodeList*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<NodeList*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSNodeList, Base>(exec, &JSNodeListTable, this, propertyName, slot);
}

bool JSNodeList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    const HashEntry* entry = JSNodeListTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<NodeList*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<NodeList*>(impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(this, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSNodeList, Base>(exec, &JSNodeListTable, this, propertyName, descriptor);
}

bool JSNodeList::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<NodeList*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsNodeListLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNodeList* castedThis = static_cast<JSNodeList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeList* imp = static_cast<NodeList*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsNodeListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSNodeList* domObject = static_cast<JSNodeList*>(asObject(slotBase));
    return JSNodeList::getConstructor(exec, domObject->globalObject());
}

void JSNodeList::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<NodeList*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSNodeList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNodeListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsNodeListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNodeList::s_info))
        return throwVMTypeError(exec);
    JSNodeList* castedThis = static_cast<JSNodeList*>(asObject(thisValue));
    NodeList* imp = static_cast<NodeList*>(castedThis->impl());
    int index(exec->argument(0).toUInt32(exec));
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}


JSValue JSNodeList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSNodeList* thisObj = static_cast<JSNodeList*>(asObject(slotBase));
    return toJS(exec, thisObj->globalObject(), static_cast<NodeList*>(thisObj->impl())->item(index));
}

void JSNodeListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSNodeList* jsNodeList = static_cast<JSNodeList*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsNodeList->impl(), jsNodeList);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, NodeList* impl)
{
    return wrap<JSNodeList>(exec, globalObject, impl);
}

NodeList* toNodeList(JSC::JSValue value)
{
    return value.inherits(&JSNodeList::s_info) ? static_cast<JSNodeList*>(asObject(value))->impl() : 0;
}

}
