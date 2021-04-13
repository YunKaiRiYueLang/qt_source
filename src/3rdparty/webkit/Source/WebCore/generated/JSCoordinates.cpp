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
#include "JSCoordinates.h"

#include "Coordinates.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCoordinates);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCoordinatesTableValues[8] =
{
    { "latitude", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCoordinatesLatitude), (intptr_t)0 THUNK_GENERATOR(0) },
    { "longitude", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCoordinatesLongitude), (intptr_t)0 THUNK_GENERATOR(0) },
    { "altitude", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCoordinatesAltitude), (intptr_t)0 THUNK_GENERATOR(0) },
    { "accuracy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCoordinatesAccuracy), (intptr_t)0 THUNK_GENERATOR(0) },
    { "altitudeAccuracy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCoordinatesAltitudeAccuracy), (intptr_t)0 THUNK_GENERATOR(0) },
    { "heading", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCoordinatesHeading), (intptr_t)0 THUNK_GENERATOR(0) },
    { "speed", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCoordinatesSpeed), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCoordinatesTable = { 16, 15, JSCoordinatesTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCoordinatesPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCoordinatesPrototypeTable = { 1, 0, JSCoordinatesPrototypeTableValues, 0 };
const ClassInfo JSCoordinatesPrototype::s_info = { "CoordinatesPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCoordinatesPrototypeTable, 0 };

JSObject* JSCoordinatesPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCoordinates>(exec, globalObject);
}

const ClassInfo JSCoordinates::s_info = { "Coordinates", &JSDOMWrapper::s_info, &JSCoordinatesTable, 0 };

JSCoordinates::JSCoordinates(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Coordinates> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSCoordinates::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCoordinatesPrototype(exec->globalData(), globalObject, JSCoordinatesPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSCoordinates::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCoordinates, Base>(exec, &JSCoordinatesTable, this, propertyName, slot);
}

bool JSCoordinates::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCoordinates, Base>(exec, &JSCoordinatesTable, this, propertyName, descriptor);
}

JSValue jsCoordinatesLatitude(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCoordinates* castedThis = static_cast<JSCoordinates*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Coordinates* imp = static_cast<Coordinates*>(castedThis->impl());
    JSValue result = jsNumber(imp->latitude());
    return result;
}


JSValue jsCoordinatesLongitude(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCoordinates* castedThis = static_cast<JSCoordinates*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Coordinates* imp = static_cast<Coordinates*>(castedThis->impl());
    JSValue result = jsNumber(imp->longitude());
    return result;
}


JSValue jsCoordinatesAltitude(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCoordinates* castedThis = static_cast<JSCoordinates*>(asObject(slotBase));
    return castedThis->altitude(exec);
}


JSValue jsCoordinatesAccuracy(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCoordinates* castedThis = static_cast<JSCoordinates*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Coordinates* imp = static_cast<Coordinates*>(castedThis->impl());
    JSValue result = jsNumber(imp->accuracy());
    return result;
}


JSValue jsCoordinatesAltitudeAccuracy(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCoordinates* castedThis = static_cast<JSCoordinates*>(asObject(slotBase));
    return castedThis->altitudeAccuracy(exec);
}


JSValue jsCoordinatesHeading(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCoordinates* castedThis = static_cast<JSCoordinates*>(asObject(slotBase));
    return castedThis->heading(exec);
}


JSValue jsCoordinatesSpeed(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCoordinates* castedThis = static_cast<JSCoordinates*>(asObject(slotBase));
    return castedThis->speed(exec);
}


JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Coordinates* impl)
{
    return wrap<JSCoordinates>(exec, globalObject, impl);
}

Coordinates* toCoordinates(JSC::JSValue value)
{
    return value.inherits(&JSCoordinates::s_info) ? static_cast<JSCoordinates*>(asObject(value))->impl() : 0;
}

}
