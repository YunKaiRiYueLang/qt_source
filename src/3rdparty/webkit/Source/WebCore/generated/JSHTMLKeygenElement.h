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

#ifndef JSHTMLKeygenElement_h
#define JSHTMLKeygenElement_h

#include "JSHTMLElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class HTMLKeygenElement;

class JSHTMLKeygenElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLKeygenElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLKeygenElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLKeygenElementPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSHTMLKeygenElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLKeygenElementPrototypeFunctionCheckValidity(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLKeygenElementPrototypeFunctionSetCustomValidity(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLKeygenElementAutofocus(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLKeygenElementAutofocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLKeygenElementChallenge(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLKeygenElementChallenge(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLKeygenElementDisabled(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLKeygenElementDisabled(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLKeygenElementForm(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLKeygenElementKeytype(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLKeygenElementKeytype(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLKeygenElementName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLKeygenElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLKeygenElementType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLKeygenElementWillValidate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLKeygenElementValidity(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLKeygenElementValidationMessage(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLKeygenElementLabels(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLKeygenElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
