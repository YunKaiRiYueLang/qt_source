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

#ifndef JSCoordinates_h
#define JSCoordinates_h

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class Coordinates;

class JSCoordinates : public JSDOMWrapper {
    typedef JSDOMWrapper Base;
public:
    JSCoordinates(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Coordinates>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }


    // Custom attributes
    JSC::JSValue altitude(JSC::ExecState*) const;
    JSC::JSValue altitudeAccuracy(JSC::ExecState*) const;
    JSC::JSValue heading(JSC::ExecState*) const;
    JSC::JSValue speed(JSC::ExecState*) const;
    Coordinates* impl() const { return m_impl.get(); }

private:
    RefPtr<Coordinates> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Coordinates*);
Coordinates* toCoordinates(JSC::JSValue);

class JSCoordinatesPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSCoordinatesPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsCoordinatesLatitude(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCoordinatesLongitude(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCoordinatesAltitude(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCoordinatesAccuracy(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCoordinatesAltitudeAccuracy(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCoordinatesHeading(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCoordinatesSpeed(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
