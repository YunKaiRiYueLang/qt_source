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

#include "JSSVGPathSegArcAbs.h"

#include "SVGPathSegArc.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegArcAbs);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegArcAbsTableValues[9] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsX), (intptr_t)setJSSVGPathSegArcAbsX THUNK_GENERATOR(0) },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsY), (intptr_t)setJSSVGPathSegArcAbsY THUNK_GENERATOR(0) },
    { "r1", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsR1), (intptr_t)setJSSVGPathSegArcAbsR1 THUNK_GENERATOR(0) },
    { "r2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsR2), (intptr_t)setJSSVGPathSegArcAbsR2 THUNK_GENERATOR(0) },
    { "angle", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsAngle), (intptr_t)setJSSVGPathSegArcAbsAngle THUNK_GENERATOR(0) },
    { "largeArcFlag", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsLargeArcFlag), (intptr_t)setJSSVGPathSegArcAbsLargeArcFlag THUNK_GENERATOR(0) },
    { "sweepFlag", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsSweepFlag), (intptr_t)setJSSVGPathSegArcAbsSweepFlag THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcAbsConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegArcAbsTable = { 17, 15, JSSVGPathSegArcAbsTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegArcAbsConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegArcAbsConstructorTable = { 1, 0, JSSVGPathSegArcAbsConstructorTableValues, 0 };
class JSSVGPathSegArcAbsConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegArcAbsConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPathSegArcAbsConstructor::s_info = { "SVGPathSegArcAbsConstructor", &DOMConstructorObject::s_info, &JSSVGPathSegArcAbsConstructorTable, 0 };

JSSVGPathSegArcAbsConstructor::JSSVGPathSegArcAbsConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPathSegArcAbsPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPathSegArcAbsConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegArcAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegArcAbsConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegArcAbsConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegArcAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegArcAbsConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegArcAbsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegArcAbsPrototypeTable = { 1, 0, JSSVGPathSegArcAbsPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegArcAbsPrototype::s_info = { "SVGPathSegArcAbsPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPathSegArcAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegArcAbsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegArcAbs>(exec, globalObject);
}

const ClassInfo JSSVGPathSegArcAbs::s_info = { "SVGPathSegArcAbs", &JSSVGPathSeg::s_info, &JSSVGPathSegArcAbsTable, 0 };

JSSVGPathSegArcAbs::JSSVGPathSegArcAbs(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegArcAbs> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegArcAbs::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegArcAbsPrototype(exec->globalData(), globalObject, JSSVGPathSegArcAbsPrototype::createStructure(exec->globalData(), JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegArcAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegArcAbs, Base>(exec, &JSSVGPathSegArcAbsTable, this, propertyName, slot);
}

bool JSSVGPathSegArcAbs::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegArcAbs, Base>(exec, &JSSVGPathSegArcAbsTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegArcAbsX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(imp->x());
    return result;
}


JSValue jsSVGPathSegArcAbsY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(imp->y());
    return result;
}


JSValue jsSVGPathSegArcAbsR1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(imp->r1());
    return result;
}


JSValue jsSVGPathSegArcAbsR2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(imp->r2());
    return result;
}


JSValue jsSVGPathSegArcAbsAngle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsNumber(imp->angle());
    return result;
}


JSValue jsSVGPathSegArcAbsLargeArcFlag(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsBoolean(imp->largeArcFlag());
    return result;
}


JSValue jsSVGPathSegArcAbsSweepFlag(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    JSValue result = jsBoolean(imp->sweepFlag());
    return result;
}


JSValue jsSVGPathSegArcAbsConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcAbs* domObject = static_cast<JSSVGPathSegArcAbs*>(asObject(slotBase));
    return JSSVGPathSegArcAbs::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegArcAbs::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegArcAbs, Base>(exec, propertyName, value, &JSSVGPathSegArcAbsTable, this, slot);
}

void setJSSVGPathSegArcAbsX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    imp->setX(value.toFloat(exec));
}


void setJSSVGPathSegArcAbsY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    imp->setY(value.toFloat(exec));
}


void setJSSVGPathSegArcAbsR1(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    imp->setR1(value.toFloat(exec));
}


void setJSSVGPathSegArcAbsR2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    imp->setR2(value.toFloat(exec));
}


void setJSSVGPathSegArcAbsAngle(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    imp->setAngle(value.toFloat(exec));
}


void setJSSVGPathSegArcAbsLargeArcFlag(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    imp->setLargeArcFlag(value.toBoolean(exec));
}


void setJSSVGPathSegArcAbsSweepFlag(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcAbs* castedThis = static_cast<JSSVGPathSegArcAbs*>(thisObject);
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(castedThis->impl());
    imp->setSweepFlag(value.toBoolean(exec));
}


JSValue JSSVGPathSegArcAbs::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegArcAbsConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
