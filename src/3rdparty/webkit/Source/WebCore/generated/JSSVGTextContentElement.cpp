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

#if ENABLE(SVG)

#include "JSSVGTextContentElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGPoint.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGRect.h"
#include "SVGStringList.h"
#include "SVGTextContentElement.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTextContentElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTextContentElementTableValues[12] =
{
    { "textLength", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementTextLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "lengthAdjust", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLengthAdjust), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementXmllang), (intptr_t)setJSSVGTextContentElementXmllang THUNK_GENERATOR(0) },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementXmlspace), (intptr_t)setJSSVGTextContentElementXmlspace THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTextContentElementTable = { 34, 31, JSSVGTextContentElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTextContentElementConstructorTableValues[4] =
{
    { "LENGTHADJUST_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "LENGTHADJUST_SPACING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_SPACING), (intptr_t)0 THUNK_GENERATOR(0) },
    { "LENGTHADJUST_SPACINGANDGLYPHS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_SPACINGANDGLYPHS), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTextContentElementConstructorTable = { 8, 7, JSSVGTextContentElementConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGTextContentElement::LENGTHADJUST_UNKNOWN, SVGTextContentElementEnumLENGTHADJUST_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGTextContentElement::LENGTHADJUST_SPACING, SVGTextContentElementEnumLENGTHADJUST_SPACINGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGTextContentElement::LENGTHADJUST_SPACINGANDGLYPHS, SVGTextContentElementEnumLENGTHADJUST_SPACINGANDGLYPHSIsWrongUseDontCheckEnums);

class JSSVGTextContentElementConstructor : public DOMConstructorObject {
public:
    JSSVGTextContentElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGTextContentElementConstructor::s_info = { "SVGTextContentElementConstructor", &DOMConstructorObject::s_info, &JSSVGTextContentElementConstructorTable, 0 };

JSSVGTextContentElementConstructor::JSSVGTextContentElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGTextContentElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGTextContentElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTextContentElementConstructor, JSDOMWrapper>(exec, &JSSVGTextContentElementConstructorTable, this, propertyName, slot);
}

bool JSSVGTextContentElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTextContentElementConstructor, JSDOMWrapper>(exec, &JSSVGTextContentElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTextContentElementPrototypeTableValues[15] =
{
    { "LENGTHADJUST_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "LENGTHADJUST_SPACING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_SPACING), (intptr_t)0 THUNK_GENERATOR(0) },
    { "LENGTHADJUST_SPACINGANDGLYPHS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextContentElementLENGTHADJUST_SPACINGANDGLYPHS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getNumberOfChars", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetNumberOfChars), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getComputedTextLength", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetComputedTextLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getSubStringLength", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetSubStringLength), (intptr_t)2 THUNK_GENERATOR(0) },
    { "getStartPositionOfChar", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetStartPositionOfChar), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getEndPositionOfChar", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetEndPositionOfChar), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getExtentOfChar", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetExtentOfChar), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getRotationOfChar", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetRotationOfChar), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getCharNumAtPosition", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetCharNumAtPosition), (intptr_t)1 THUNK_GENERATOR(0) },
    { "selectSubString", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionSelectSubString), (intptr_t)2 THUNK_GENERATOR(0) },
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTextContentElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTextContentElementPrototypeTable = { 34, 31, JSSVGTextContentElementPrototypeTableValues, 0 };
const ClassInfo JSSVGTextContentElementPrototype::s_info = { "SVGTextContentElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGTextContentElementPrototypeTable, 0 };

JSObject* JSSVGTextContentElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTextContentElement>(exec, globalObject);
}

bool JSSVGTextContentElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGTextContentElementPrototype, JSObject>(exec, &JSSVGTextContentElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGTextContentElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGTextContentElementPrototype, JSObject>(exec, &JSSVGTextContentElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGTextContentElement::s_info = { "SVGTextContentElement", &JSSVGElement::s_info, &JSSVGTextContentElementTable, 0 };

JSSVGTextContentElement::JSSVGTextContentElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTextContentElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGTextContentElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTextContentElementPrototype(exec->globalData(), globalObject, JSSVGTextContentElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGTextContentElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTextContentElement, Base>(exec, &JSSVGTextContentElementTable, this, propertyName, slot);
}

bool JSSVGTextContentElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTextContentElement, Base>(exec, &JSSVGTextContentElementTable, this, propertyName, descriptor);
}

JSValue jsSVGTextContentElementTextLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->textLengthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGTextContentElementLengthAdjust(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->lengthAdjustAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGTextContentElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGTextContentElement, IsDerivedFromSVGElement<SVGTextContentElement>::value>::ownerElement(imp), imp->requiredFeatures())));
    return result;
}


JSValue jsSVGTextContentElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGTextContentElement, IsDerivedFromSVGElement<SVGTextContentElement>::value>::ownerElement(imp), imp->requiredExtensions())));
    return result;
}


JSValue jsSVGTextContentElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(GetOwnerElementForType<SVGTextContentElement, IsDerivedFromSVGElement<SVGTextContentElement>::value>::ownerElement(imp), imp->systemLanguage())));
    return result;
}


JSValue jsSVGTextContentElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}


JSValue jsSVGTextContentElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}


JSValue jsSVGTextContentElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGTextContentElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGTextContentElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGTextContentElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTextContentElement* domObject = static_cast<JSSVGTextContentElement*>(asObject(slotBase));
    return JSSVGTextContentElement::getConstructor(exec, domObject->globalObject());
}

void JSSVGTextContentElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGTextContentElement, Base>(exec, propertyName, value, &JSSVGTextContentElementTable, this, slot);
}

void setJSSVGTextContentElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(thisObject);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    imp->setXmllang(ustringToString(value.toString(exec)));
}


void setJSSVGTextContentElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(thisObject);
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    imp->setXmlspace(ustringToString(value.toString(exec)));
}


JSValue JSSVGTextContentElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTextContentElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetNumberOfChars(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());


    JSC::JSValue result = jsNumber(imp->getNumberOfChars());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetComputedTextLength(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());


    JSC::JSValue result = jsNumber(imp->getComputedTextLength());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetSubStringLength(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(exec->argument(1).toUInt32(exec));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsNumber(imp->getSubStringLength(offset, length, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetStartPositionOfChar(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(imp->getStartPositionOfChar(offset, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetEndPositionOfChar(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(imp->getEndPositionOfChar(offset, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetExtentOfChar(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getExtentOfChar(offset, ec))));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetRotationOfChar(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsNumber(imp->getRotationOfChar(offset, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetCharNumAtPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    SVGPropertyTearOff<FloatPoint>* point(toSVGPoint(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (!point) {
        setDOMException(exec, TYPE_MISMATCH_ERR);
        return JSValue::encode(jsUndefined());
    }


    JSC::JSValue result = jsNumber(imp->getCharNumAtPosition(point->propertyReference()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionSelectSubString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(exec->argument(1).toUInt32(exec));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->selectSubString(offset, length, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    const String& extension(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTextContentElement::s_info))
        return throwVMTypeError(exec);
    JSSVGTextContentElement* castedThis = static_cast<JSSVGTextContentElement*>(asObject(thisValue));
    SVGTextContentElement* imp = static_cast<SVGTextContentElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}

// Constant getters

JSValue jsSVGTextContentElementLENGTHADJUST_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGTextContentElementLENGTHADJUST_SPACING(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGTextContentElementLENGTHADJUST_SPACINGANDGLYPHS(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}


}

#endif // ENABLE(SVG)
