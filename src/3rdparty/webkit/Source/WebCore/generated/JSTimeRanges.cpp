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

#if ENABLE(VIDEO)

#include "JSTimeRanges.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "TimeRanges.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTimeRanges);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSTimeRangesTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTimeRangesLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTimeRangesConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTimeRangesTable = { 5, 3, JSTimeRangesTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSTimeRangesConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTimeRangesConstructorTable = { 1, 0, JSTimeRangesConstructorTableValues, 0 };
class JSTimeRangesConstructor : public DOMConstructorObject {
public:
    JSTimeRangesConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSTimeRangesConstructor::s_info = { "TimeRangesConstructor", &DOMConstructorObject::s_info, &JSTimeRangesConstructorTable, 0 };

JSTimeRangesConstructor::JSTimeRangesConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSTimeRangesPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSTimeRangesConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTimeRangesConstructor, JSDOMWrapper>(exec, &JSTimeRangesConstructorTable, this, propertyName, slot);
}

bool JSTimeRangesConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTimeRangesConstructor, JSDOMWrapper>(exec, &JSTimeRangesConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSTimeRangesPrototypeTableValues[3] =
{
    { "start", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTimeRangesPrototypeFunctionStart), (intptr_t)1 THUNK_GENERATOR(0) },
    { "end", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTimeRangesPrototypeFunctionEnd), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTimeRangesPrototypeTable = { 5, 3, JSTimeRangesPrototypeTableValues, 0 };
const ClassInfo JSTimeRangesPrototype::s_info = { "TimeRangesPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSTimeRangesPrototypeTable, 0 };

JSObject* JSTimeRangesPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTimeRanges>(exec, globalObject);
}

bool JSTimeRangesPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSTimeRangesPrototypeTable, this, propertyName, slot);
}

bool JSTimeRangesPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSTimeRangesPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSTimeRanges::s_info = { "TimeRanges", &JSDOMWrapper::s_info, &JSTimeRangesTable, 0 };

JSTimeRanges::JSTimeRanges(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TimeRanges> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSTimeRanges::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSTimeRangesPrototype(exec->globalData(), globalObject, JSTimeRangesPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSTimeRanges::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTimeRanges, Base>(exec, &JSTimeRangesTable, this, propertyName, slot);
}

bool JSTimeRanges::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTimeRanges, Base>(exec, &JSTimeRangesTable, this, propertyName, descriptor);
}

JSValue jsTimeRangesLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTimeRanges* castedThis = static_cast<JSTimeRanges*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TimeRanges* imp = static_cast<TimeRanges*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsTimeRangesConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTimeRanges* domObject = static_cast<JSTimeRanges*>(asObject(slotBase));
    return JSTimeRanges::getConstructor(exec, domObject->globalObject());
}

JSValue JSTimeRanges::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTimeRangesConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTimeRangesPrototypeFunctionStart(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTimeRanges::s_info))
        return throwVMTypeError(exec);
    JSTimeRanges* castedThis = static_cast<JSTimeRanges*>(asObject(thisValue));
    TimeRanges* imp = static_cast<TimeRanges*>(castedThis->impl());
    ExceptionCode ec = 0;
    unsigned index(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsNumber(imp->start(index, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTimeRangesPrototypeFunctionEnd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTimeRanges::s_info))
        return throwVMTypeError(exec);
    JSTimeRanges* castedThis = static_cast<JSTimeRanges*>(asObject(thisValue));
    TimeRanges* imp = static_cast<TimeRanges*>(castedThis->impl());
    ExceptionCode ec = 0;
    unsigned index(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsNumber(imp->end(index, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TimeRanges* impl)
{
    return wrap<JSTimeRanges>(exec, globalObject, impl);
}

TimeRanges* toTimeRanges(JSC::JSValue value)
{
    return value.inherits(&JSTimeRanges::s_info) ? static_cast<JSTimeRanges*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(VIDEO)
