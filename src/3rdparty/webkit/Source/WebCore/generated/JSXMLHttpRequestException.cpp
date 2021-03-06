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
#include "JSXMLHttpRequestException.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include "XMLHttpRequestException.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXMLHttpRequestException);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXMLHttpRequestExceptionTableValues[5] =
{
    { "code", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionCode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "message", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionMessage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXMLHttpRequestExceptionTable = { 10, 7, JSXMLHttpRequestExceptionTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXMLHttpRequestExceptionConstructorTableValues[3] =
{
    { "NETWORK_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionNETWORK_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionABORT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXMLHttpRequestExceptionConstructorTable = { 4, 3, JSXMLHttpRequestExceptionConstructorTableValues, 0 };
class JSXMLHttpRequestExceptionConstructor : public DOMConstructorObject {
public:
    JSXMLHttpRequestExceptionConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSXMLHttpRequestExceptionConstructor::s_info = { "XMLHttpRequestExceptionConstructor", &DOMConstructorObject::s_info, &JSXMLHttpRequestExceptionConstructorTable, 0 };

JSXMLHttpRequestExceptionConstructor::JSXMLHttpRequestExceptionConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSXMLHttpRequestExceptionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSXMLHttpRequestExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestExceptionConstructor, JSDOMWrapper>(exec, &JSXMLHttpRequestExceptionConstructorTable, this, propertyName, slot);
}

bool JSXMLHttpRequestExceptionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXMLHttpRequestExceptionConstructor, JSDOMWrapper>(exec, &JSXMLHttpRequestExceptionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXMLHttpRequestExceptionPrototypeTableValues[4] =
{
    { "NETWORK_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionNETWORK_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionABORT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "toString", DontDelete | DontEnum | Function, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestExceptionPrototypeFunctionToString), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXMLHttpRequestExceptionPrototypeTable = { 8, 7, JSXMLHttpRequestExceptionPrototypeTableValues, 0 };
static const HashTable* getJSXMLHttpRequestExceptionPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSXMLHttpRequestExceptionPrototypeTable);
}

const ClassInfo JSXMLHttpRequestExceptionPrototype::s_info = { "XMLHttpRequestExceptionPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSXMLHttpRequestExceptionPrototypeTable };

JSObject* JSXMLHttpRequestExceptionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXMLHttpRequestException>(exec, globalObject);
}

bool JSXMLHttpRequestExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSXMLHttpRequestExceptionPrototype, JSObject>(exec, getJSXMLHttpRequestExceptionPrototypeTable(exec), this, propertyName, slot);
}

bool JSXMLHttpRequestExceptionPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSXMLHttpRequestExceptionPrototype, JSObject>(exec, getJSXMLHttpRequestExceptionPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSXMLHttpRequestExceptionTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSXMLHttpRequestExceptionTable);
}

const ClassInfo JSXMLHttpRequestException::s_info = { "XMLHttpRequestException", &JSDOMWrapper::s_info, 0, getJSXMLHttpRequestExceptionTable };

JSXMLHttpRequestException::JSXMLHttpRequestException(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XMLHttpRequestException> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSXMLHttpRequestException::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSXMLHttpRequestExceptionPrototype(exec->globalData(), globalObject, JSXMLHttpRequestExceptionPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSXMLHttpRequestException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestException, Base>(exec, getJSXMLHttpRequestExceptionTable(exec), this, propertyName, slot);
}

bool JSXMLHttpRequestException::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXMLHttpRequestException, Base>(exec, getJSXMLHttpRequestExceptionTable(exec), this, propertyName, descriptor);
}

JSValue jsXMLHttpRequestExceptionCode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestException* castedThis = static_cast<JSXMLHttpRequestException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestException* imp = static_cast<XMLHttpRequestException*>(castedThis->impl());
    JSValue result = jsNumber(imp->code());
    return result;
}


JSValue jsXMLHttpRequestExceptionName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestException* castedThis = static_cast<JSXMLHttpRequestException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestException* imp = static_cast<XMLHttpRequestException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}


JSValue jsXMLHttpRequestExceptionMessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestException* castedThis = static_cast<JSXMLHttpRequestException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestException* imp = static_cast<XMLHttpRequestException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->message());
    return result;
}


JSValue jsXMLHttpRequestExceptionConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXMLHttpRequestException* domObject = static_cast<JSXMLHttpRequestException*>(asObject(slotBase));
    return JSXMLHttpRequestException::getConstructor(exec, domObject->globalObject());
}

JSValue JSXMLHttpRequestException::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXMLHttpRequestExceptionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestExceptionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSXMLHttpRequestException::s_info))
        return throwVMTypeError(exec);
    JSXMLHttpRequestException* castedThis = static_cast<JSXMLHttpRequestException*>(asObject(thisValue));
    XMLHttpRequestException* imp = static_cast<XMLHttpRequestException*>(castedThis->impl());


    JSC::JSValue result = jsString(exec, imp->toString());
    return JSValue::encode(result);
}

// Constant getters

JSValue jsXMLHttpRequestExceptionNETWORK_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(101));
}

JSValue jsXMLHttpRequestExceptionABORT_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(102));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XMLHttpRequestException* impl)
{
    return wrap<JSXMLHttpRequestException>(exec, globalObject, impl);
}

XMLHttpRequestException* toXMLHttpRequestException(JSC::JSValue value)
{
    return value.inherits(&JSXMLHttpRequestException::s_info) ? static_cast<JSXMLHttpRequestException*>(asObject(value))->impl() : 0;
}

}
