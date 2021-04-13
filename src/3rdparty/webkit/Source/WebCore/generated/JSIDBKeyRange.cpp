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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBKeyRange.h"

#include "ExceptionCode.h"
#include "IDBBindingUtilities.h"
#include "IDBKey.h"
#include "IDBKeyRange.h"
#include "JSDOMBinding.h"
#include "JSIDBKey.h"
#include "JSIDBKeyRange.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSIDBKeyRange);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBKeyRangeTableValues[6] =
{
    { "lower", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBKeyRangeLower), (intptr_t)0 THUNK_GENERATOR(0) },
    { "upper", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBKeyRangeUpper), (intptr_t)0 THUNK_GENERATOR(0) },
    { "lowerOpen", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBKeyRangeLowerOpen), (intptr_t)0 THUNK_GENERATOR(0) },
    { "upperOpen", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBKeyRangeUpperOpen), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBKeyRangeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBKeyRangeTable = { 16, 15, JSIDBKeyRangeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBKeyRangeConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBKeyRangeConstructorTable = { 1, 0, JSIDBKeyRangeConstructorTableValues, 0 };
class JSIDBKeyRangeConstructor : public DOMConstructorObject {
public:
    JSIDBKeyRangeConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSIDBKeyRangeConstructor::s_info = { "IDBKeyRangeConstructor", &DOMConstructorObject::s_info, &JSIDBKeyRangeConstructorTable, 0 };

JSIDBKeyRangeConstructor::JSIDBKeyRangeConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSIDBKeyRangePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSIDBKeyRangeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBKeyRangeConstructor, JSDOMWrapper>(exec, &JSIDBKeyRangeConstructorTable, this, propertyName, slot);
}

bool JSIDBKeyRangeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBKeyRangeConstructor, JSDOMWrapper>(exec, &JSIDBKeyRangeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBKeyRangePrototypeTableValues[5] =
{
    { "only", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBKeyRangePrototypeFunctionOnly), (intptr_t)1 THUNK_GENERATOR(0) },
    { "lowerBound", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBKeyRangePrototypeFunctionLowerBound), (intptr_t)2 THUNK_GENERATOR(0) },
    { "upperBound", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBKeyRangePrototypeFunctionUpperBound), (intptr_t)2 THUNK_GENERATOR(0) },
    { "bound", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBKeyRangePrototypeFunctionBound), (intptr_t)4 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBKeyRangePrototypeTable = { 9, 7, JSIDBKeyRangePrototypeTableValues, 0 };
const ClassInfo JSIDBKeyRangePrototype::s_info = { "IDBKeyRangePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSIDBKeyRangePrototypeTable, 0 };

JSObject* JSIDBKeyRangePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBKeyRange>(exec, globalObject);
}

bool JSIDBKeyRangePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSIDBKeyRangePrototypeTable, this, propertyName, slot);
}

bool JSIDBKeyRangePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSIDBKeyRangePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSIDBKeyRange::s_info = { "IDBKeyRange", &JSDOMWrapper::s_info, &JSIDBKeyRangeTable, 0 };

JSIDBKeyRange::JSIDBKeyRange(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBKeyRange> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSIDBKeyRange::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSIDBKeyRangePrototype(exec->globalData(), globalObject, JSIDBKeyRangePrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSIDBKeyRange::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBKeyRange, Base>(exec, &JSIDBKeyRangeTable, this, propertyName, slot);
}

bool JSIDBKeyRange::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBKeyRange, Base>(exec, &JSIDBKeyRangeTable, this, propertyName, descriptor);
}

JSValue jsIDBKeyRangeLower(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBKeyRange* castedThis = static_cast<JSIDBKeyRange*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBKeyRange* imp = static_cast<IDBKeyRange*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->lower()));
    return result;
}


JSValue jsIDBKeyRangeUpper(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBKeyRange* castedThis = static_cast<JSIDBKeyRange*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBKeyRange* imp = static_cast<IDBKeyRange*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->upper()));
    return result;
}


JSValue jsIDBKeyRangeLowerOpen(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBKeyRange* castedThis = static_cast<JSIDBKeyRange*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBKeyRange* imp = static_cast<IDBKeyRange*>(castedThis->impl());
    JSValue result = jsBoolean(imp->lowerOpen());
    return result;
}


JSValue jsIDBKeyRangeUpperOpen(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBKeyRange* castedThis = static_cast<JSIDBKeyRange*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBKeyRange* imp = static_cast<IDBKeyRange*>(castedThis->impl());
    JSValue result = jsBoolean(imp->upperOpen());
    return result;
}


JSValue jsIDBKeyRangeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBKeyRange* domObject = static_cast<JSIDBKeyRange*>(asObject(slotBase));
    return JSIDBKeyRange::getConstructor(exec, domObject->globalObject());
}

JSValue JSIDBKeyRange::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBKeyRangeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsIDBKeyRangePrototypeFunctionOnly(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBKeyRange::s_info))
        return throwVMTypeError(exec);
    JSIDBKeyRange* castedThis = static_cast<JSIDBKeyRange*>(asObject(thisValue));
    IDBKeyRange* imp = static_cast<IDBKeyRange*>(castedThis->impl());
    RefPtr<IDBKey> value(createIDBKeyFromValue(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->only(value)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBKeyRangePrototypeFunctionLowerBound(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBKeyRange::s_info))
        return throwVMTypeError(exec);
    JSIDBKeyRange* castedThis = static_cast<JSIDBKeyRange*>(asObject(thisValue));
    IDBKeyRange* imp = static_cast<IDBKeyRange*>(castedThis->impl());
    RefPtr<IDBKey> bound(createIDBKeyFromValue(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->lowerBound(bound)));
        return JSValue::encode(result);
    }

    bool open(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->lowerBound(bound, open)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBKeyRangePrototypeFunctionUpperBound(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBKeyRange::s_info))
        return throwVMTypeError(exec);
    JSIDBKeyRange* castedThis = static_cast<JSIDBKeyRange*>(asObject(thisValue));
    IDBKeyRange* imp = static_cast<IDBKeyRange*>(castedThis->impl());
    RefPtr<IDBKey> bound(createIDBKeyFromValue(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->upperBound(bound)));
        return JSValue::encode(result);
    }

    bool open(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->upperBound(bound, open)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBKeyRangePrototypeFunctionBound(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBKeyRange::s_info))
        return throwVMTypeError(exec);
    JSIDBKeyRange* castedThis = static_cast<JSIDBKeyRange*>(asObject(thisValue));
    IDBKeyRange* imp = static_cast<IDBKeyRange*>(castedThis->impl());
    RefPtr<IDBKey> lower(createIDBKeyFromValue(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<IDBKey> upper(createIDBKeyFromValue(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    int argsCount = exec->argumentCount();
    if (argsCount <= 2) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->bound(lower, upper)));
        return JSValue::encode(result);
    }

    bool lowerOpen(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (argsCount <= 3) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->bound(lower, upper, lowerOpen)));
        return JSValue::encode(result);
    }

    bool upperOpen(exec->argument(3).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->bound(lower, upper, lowerOpen, upperOpen)));
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBKeyRange* impl)
{
    return wrap<JSIDBKeyRange>(exec, globalObject, impl);
}

IDBKeyRange* toIDBKeyRange(JSC::JSValue value)
{
    return value.inherits(&JSIDBKeyRange::s_info) ? static_cast<JSIDBKeyRange*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
