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

#include "JSSVGLinearGradientElement.h"

#include "JSSVGAnimatedLength.h"
#include "SVGLinearGradientElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGLinearGradientElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLinearGradientElementTableValues[6] =
{
    { "x1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementX1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementY1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x2", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementX2), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y2", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementY2), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLinearGradientElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLinearGradientElementTable = { 16, 15, JSSVGLinearGradientElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLinearGradientElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLinearGradientElementConstructorTable = { 1, 0, JSSVGLinearGradientElementConstructorTableValues, 0 };
class JSSVGLinearGradientElementConstructor : public DOMConstructorObject {
public:
    JSSVGLinearGradientElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGLinearGradientElementConstructor::s_info = { "SVGLinearGradientElementConstructor", &DOMConstructorObject::s_info, &JSSVGLinearGradientElementConstructorTable, 0 };

JSSVGLinearGradientElementConstructor::JSSVGLinearGradientElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGLinearGradientElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGLinearGradientElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLinearGradientElementConstructor, JSDOMWrapper>(exec, &JSSVGLinearGradientElementConstructorTable, this, propertyName, slot);
}

bool JSSVGLinearGradientElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLinearGradientElementConstructor, JSDOMWrapper>(exec, &JSSVGLinearGradientElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLinearGradientElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLinearGradientElementPrototypeTable = { 1, 0, JSSVGLinearGradientElementPrototypeTableValues, 0 };
const ClassInfo JSSVGLinearGradientElementPrototype::s_info = { "SVGLinearGradientElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGLinearGradientElementPrototypeTable, 0 };

JSObject* JSSVGLinearGradientElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGLinearGradientElement>(exec, globalObject);
}

const ClassInfo JSSVGLinearGradientElement::s_info = { "SVGLinearGradientElement", &JSSVGGradientElement::s_info, &JSSVGLinearGradientElementTable, 0 };

JSSVGLinearGradientElement::JSSVGLinearGradientElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGLinearGradientElement> impl)
    : JSSVGGradientElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGLinearGradientElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGLinearGradientElementPrototype(exec->globalData(), globalObject, JSSVGLinearGradientElementPrototype::createStructure(exec->globalData(), JSSVGGradientElementPrototype::self(exec, globalObject)));
}

bool JSSVGLinearGradientElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLinearGradientElement, Base>(exec, &JSSVGLinearGradientElementTable, this, propertyName, slot);
}

bool JSSVGLinearGradientElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLinearGradientElement, Base>(exec, &JSSVGLinearGradientElementTable, this, propertyName, descriptor);
}

JSValue jsSVGLinearGradientElementX1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLinearGradientElement* castedThis = static_cast<JSSVGLinearGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLinearGradientElement* imp = static_cast<SVGLinearGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->x1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGLinearGradientElementY1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLinearGradientElement* castedThis = static_cast<JSSVGLinearGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLinearGradientElement* imp = static_cast<SVGLinearGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->y1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGLinearGradientElementX2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLinearGradientElement* castedThis = static_cast<JSSVGLinearGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLinearGradientElement* imp = static_cast<SVGLinearGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->x2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGLinearGradientElementY2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLinearGradientElement* castedThis = static_cast<JSSVGLinearGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLinearGradientElement* imp = static_cast<SVGLinearGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->y2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGLinearGradientElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLinearGradientElement* domObject = static_cast<JSSVGLinearGradientElement*>(asObject(slotBase));
    return JSSVGLinearGradientElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGLinearGradientElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGLinearGradientElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
