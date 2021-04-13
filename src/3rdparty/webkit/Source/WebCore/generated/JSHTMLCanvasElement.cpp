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
#include "JSHTMLCanvasElement.h"

#include "HTMLCanvasElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLCanvasElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLCanvasElementTableValues[4] =
{
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLCanvasElementWidth), (intptr_t)setJSHTMLCanvasElementWidth THUNK_GENERATOR(0) },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLCanvasElementHeight), (intptr_t)setJSHTMLCanvasElementHeight THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLCanvasElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLCanvasElementTable = { 9, 7, JSHTMLCanvasElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLCanvasElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLCanvasElementConstructorTable = { 1, 0, JSHTMLCanvasElementConstructorTableValues, 0 };
class JSHTMLCanvasElementConstructor : public DOMConstructorObject {
public:
    JSHTMLCanvasElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLCanvasElementConstructor::s_info = { "HTMLCanvasElementConstructor", &DOMConstructorObject::s_info, &JSHTMLCanvasElementConstructorTable, 0 };

JSHTMLCanvasElementConstructor::JSHTMLCanvasElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLCanvasElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLCanvasElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLCanvasElementConstructor, JSDOMWrapper>(exec, &JSHTMLCanvasElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLCanvasElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLCanvasElementConstructor, JSDOMWrapper>(exec, &JSHTMLCanvasElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLCanvasElementPrototypeTableValues[3] =
{
    { "toDataURL", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLCanvasElementPrototypeFunctionToDataURL), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getContext", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLCanvasElementPrototypeFunctionGetContext), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLCanvasElementPrototypeTable = { 4, 3, JSHTMLCanvasElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLCanvasElementPrototype::s_info = { "HTMLCanvasElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLCanvasElementPrototypeTable, 0 };

JSObject* JSHTMLCanvasElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLCanvasElement>(exec, globalObject);
}

bool JSHTMLCanvasElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLCanvasElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLCanvasElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLCanvasElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLCanvasElement::s_info = { "HTMLCanvasElement", &JSHTMLElement::s_info, &JSHTMLCanvasElementTable, 0 };

JSHTMLCanvasElement::JSHTMLCanvasElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLCanvasElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLCanvasElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLCanvasElementPrototype(exec->globalData(), globalObject, JSHTMLCanvasElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLCanvasElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLCanvasElement, Base>(exec, &JSHTMLCanvasElementTable, this, propertyName, slot);
}

bool JSHTMLCanvasElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLCanvasElement, Base>(exec, &JSHTMLCanvasElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLCanvasElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLCanvasElement* castedThis = static_cast<JSHTMLCanvasElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->width());
    return result;
}


JSValue jsHTMLCanvasElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLCanvasElement* castedThis = static_cast<JSHTMLCanvasElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->height());
    return result;
}


JSValue jsHTMLCanvasElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLCanvasElement* domObject = static_cast<JSHTMLCanvasElement*>(asObject(slotBase));
    return JSHTMLCanvasElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLCanvasElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLCanvasElement, Base>(exec, propertyName, value, &JSHTMLCanvasElementTable, this, slot);
}

void setJSHTMLCanvasElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLCanvasElement* castedThis = static_cast<JSHTMLCanvasElement*>(thisObject);
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(castedThis->impl());
    imp->setWidth(value.toInt32(exec));
}


void setJSHTMLCanvasElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLCanvasElement* castedThis = static_cast<JSHTMLCanvasElement*>(thisObject);
    HTMLCanvasElement* imp = static_cast<HTMLCanvasElement*>(castedThis->impl());
    imp->setHeight(value.toInt32(exec));
}


JSValue JSHTMLCanvasElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLCanvasElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLCanvasElementPrototypeFunctionToDataURL(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLCanvasElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLCanvasElement* castedThis = static_cast<JSHTMLCanvasElement*>(asObject(thisValue));
    return JSValue::encode(castedThis->toDataURL(exec));
}

EncodedJSValue JSC_HOST_CALL jsHTMLCanvasElementPrototypeFunctionGetContext(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLCanvasElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLCanvasElement* castedThis = static_cast<JSHTMLCanvasElement*>(asObject(thisValue));
    return JSValue::encode(castedThis->getContext(exec));
}

HTMLCanvasElement* toHTMLCanvasElement(JSC::JSValue value)
{
    return value.inherits(&JSHTMLCanvasElement::s_info) ? static_cast<JSHTMLCanvasElement*>(asObject(value))->impl() : 0;
}

}
