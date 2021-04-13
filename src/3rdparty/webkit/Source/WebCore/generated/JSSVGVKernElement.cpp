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

#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "JSSVGVKernElement.h"

#include "SVGVKernElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGVKernElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGVKernElementTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGVKernElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGVKernElementTable = { 2, 1, JSSVGVKernElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGVKernElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGVKernElementConstructorTable = { 1, 0, JSSVGVKernElementConstructorTableValues, 0 };
class JSSVGVKernElementConstructor : public DOMConstructorObject {
public:
    JSSVGVKernElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGVKernElementConstructor::s_info = { "SVGVKernElementConstructor", &DOMConstructorObject::s_info, &JSSVGVKernElementConstructorTable, 0 };

JSSVGVKernElementConstructor::JSSVGVKernElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGVKernElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGVKernElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGVKernElementConstructor, JSDOMWrapper>(exec, &JSSVGVKernElementConstructorTable, this, propertyName, slot);
}

bool JSSVGVKernElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGVKernElementConstructor, JSDOMWrapper>(exec, &JSSVGVKernElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGVKernElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGVKernElementPrototypeTable = { 1, 0, JSSVGVKernElementPrototypeTableValues, 0 };
const ClassInfo JSSVGVKernElementPrototype::s_info = { "SVGVKernElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGVKernElementPrototypeTable, 0 };

JSObject* JSSVGVKernElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGVKernElement>(exec, globalObject);
}

const ClassInfo JSSVGVKernElement::s_info = { "SVGVKernElement", &JSSVGElement::s_info, &JSSVGVKernElementTable, 0 };

JSSVGVKernElement::JSSVGVKernElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGVKernElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGVKernElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGVKernElementPrototype(exec->globalData(), globalObject, JSSVGVKernElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGVKernElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGVKernElement, Base>(exec, &JSSVGVKernElementTable, this, propertyName, slot);
}

bool JSSVGVKernElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGVKernElement, Base>(exec, &JSSVGVKernElementTable, this, propertyName, descriptor);
}

JSValue jsSVGVKernElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGVKernElement* domObject = static_cast<JSSVGVKernElement*>(asObject(slotBase));
    return JSSVGVKernElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGVKernElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGVKernElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)
