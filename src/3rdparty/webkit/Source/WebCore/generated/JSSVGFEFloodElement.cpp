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

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFEFloodElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEFloodElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEFloodElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFloodElementTableValues[9] =
{
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFloodElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFloodElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFloodElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFloodElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFloodElementResult), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFloodElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFloodElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFloodElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFloodElementTable = { 18, 15, JSSVGFEFloodElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFloodElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFloodElementConstructorTable = { 1, 0, JSSVGFEFloodElementConstructorTableValues, 0 };
class JSSVGFEFloodElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEFloodElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFEFloodElementConstructor::s_info = { "SVGFEFloodElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEFloodElementConstructorTable, 0 };

JSSVGFEFloodElementConstructor::JSSVGFEFloodElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGFEFloodElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEFloodElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEFloodElementConstructor, JSDOMWrapper>(exec, &JSSVGFEFloodElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEFloodElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEFloodElementConstructor, JSDOMWrapper>(exec, &JSSVGFEFloodElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFloodElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEFloodElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFloodElementPrototypeTable = { 2, 1, JSSVGFEFloodElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEFloodElementPrototype::s_info = { "SVGFEFloodElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGFEFloodElementPrototypeTable, 0 };

JSObject* JSSVGFEFloodElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEFloodElement>(exec, globalObject);
}

bool JSSVGFEFloodElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEFloodElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEFloodElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFEFloodElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEFloodElement::s_info = { "SVGFEFloodElement", &JSSVGElement::s_info, &JSSVGFEFloodElementTable, 0 };

JSSVGFEFloodElement::JSSVGFEFloodElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEFloodElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEFloodElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEFloodElementPrototype(exec->globalData(), globalObject, JSSVGFEFloodElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEFloodElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEFloodElement, Base>(exec, &JSSVGFEFloodElementTable, this, propertyName, slot);
}

bool JSSVGFEFloodElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEFloodElement, Base>(exec, &JSSVGFEFloodElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEFloodElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFloodElement* castedThis = static_cast<JSSVGFEFloodElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEFloodElement* imp = static_cast<SVGFEFloodElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEFloodElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFloodElement* castedThis = static_cast<JSSVGFEFloodElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEFloodElement* imp = static_cast<SVGFEFloodElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEFloodElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFloodElement* castedThis = static_cast<JSSVGFEFloodElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEFloodElement* imp = static_cast<SVGFEFloodElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEFloodElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFloodElement* castedThis = static_cast<JSSVGFEFloodElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEFloodElement* imp = static_cast<SVGFEFloodElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEFloodElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFloodElement* castedThis = static_cast<JSSVGFEFloodElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEFloodElement* imp = static_cast<SVGFEFloodElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEFloodElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFloodElement* castedThis = static_cast<JSSVGFEFloodElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEFloodElement* imp = static_cast<SVGFEFloodElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEFloodElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFloodElement* castedThis = static_cast<JSSVGFEFloodElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEFloodElement* imp = static_cast<SVGFEFloodElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGFEFloodElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFloodElement* domObject = static_cast<JSSVGFEFloodElement*>(asObject(slotBase));
    return JSSVGFEFloodElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEFloodElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEFloodElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEFloodElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEFloodElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEFloodElement* castedThis = static_cast<JSSVGFEFloodElement*>(asObject(thisValue));
    SVGFEFloodElement* imp = static_cast<SVGFEFloodElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
