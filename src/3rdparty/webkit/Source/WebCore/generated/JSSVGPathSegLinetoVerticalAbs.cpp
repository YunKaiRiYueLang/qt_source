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

#include "JSSVGPathSegLinetoVerticalAbs.h"

#include "SVGPathSegLinetoVertical.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegLinetoVerticalAbs);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoVerticalAbsTableValues[3] =
{
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoVerticalAbsY), (intptr_t)setJSSVGPathSegLinetoVerticalAbsY THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoVerticalAbsConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoVerticalAbsTable = { 4, 3, JSSVGPathSegLinetoVerticalAbsTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoVerticalAbsConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoVerticalAbsConstructorTable = { 1, 0, JSSVGPathSegLinetoVerticalAbsConstructorTableValues, 0 };
class JSSVGPathSegLinetoVerticalAbsConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegLinetoVerticalAbsConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPathSegLinetoVerticalAbsConstructor::s_info = { "SVGPathSegLinetoVerticalAbsConstructor", &DOMConstructorObject::s_info, &JSSVGPathSegLinetoVerticalAbsConstructorTable, 0 };

JSSVGPathSegLinetoVerticalAbsConstructor::JSSVGPathSegLinetoVerticalAbsConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPathSegLinetoVerticalAbsPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPathSegLinetoVerticalAbsConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoVerticalAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegLinetoVerticalAbsConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoVerticalAbsConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoVerticalAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegLinetoVerticalAbsConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoVerticalAbsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoVerticalAbsPrototypeTable = { 1, 0, JSSVGPathSegLinetoVerticalAbsPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegLinetoVerticalAbsPrototype::s_info = { "SVGPathSegLinetoVerticalAbsPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPathSegLinetoVerticalAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegLinetoVerticalAbsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoVerticalAbs>(exec, globalObject);
}

const ClassInfo JSSVGPathSegLinetoVerticalAbs::s_info = { "SVGPathSegLinetoVerticalAbs", &JSSVGPathSeg::s_info, &JSSVGPathSegLinetoVerticalAbsTable, 0 };

JSSVGPathSegLinetoVerticalAbs::JSSVGPathSegLinetoVerticalAbs(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegLinetoVerticalAbs> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegLinetoVerticalAbs::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegLinetoVerticalAbsPrototype(exec->globalData(), globalObject, JSSVGPathSegLinetoVerticalAbsPrototype::createStructure(exec->globalData(), JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegLinetoVerticalAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoVerticalAbs, Base>(exec, &JSSVGPathSegLinetoVerticalAbsTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoVerticalAbs::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoVerticalAbs, Base>(exec, &JSSVGPathSegLinetoVerticalAbsTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegLinetoVerticalAbsY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoVerticalAbs* castedThis = static_cast<JSSVGPathSegLinetoVerticalAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoVerticalAbs* imp = static_cast<SVGPathSegLinetoVerticalAbs*>(castedThis->impl());
    JSValue result = jsNumber(imp->y());
    return result;
}


JSValue jsSVGPathSegLinetoVerticalAbsConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoVerticalAbs* domObject = static_cast<JSSVGPathSegLinetoVerticalAbs*>(asObject(slotBase));
    return JSSVGPathSegLinetoVerticalAbs::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegLinetoVerticalAbs::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegLinetoVerticalAbs, Base>(exec, propertyName, value, &JSSVGPathSegLinetoVerticalAbsTable, this, slot);
}

void setJSSVGPathSegLinetoVerticalAbsY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegLinetoVerticalAbs* castedThis = static_cast<JSSVGPathSegLinetoVerticalAbs*>(thisObject);
    SVGPathSegLinetoVerticalAbs* imp = static_cast<SVGPathSegLinetoVerticalAbs*>(castedThis->impl());
    imp->setY(value.toFloat(exec));
}


JSValue JSSVGPathSegLinetoVerticalAbs::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoVerticalAbsConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
