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

#ifndef JSHTMLTableElement_h
#define JSHTMLTableElement_h

#include "JSHTMLElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class HTMLTableElement;

class JSHTMLTableElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLTableElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLTableElement>);
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


class JSHTMLTableElementPrototype : public JSC::JSObjectWithGlobalObject {
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
    JSHTMLTableElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionCreateTHead(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionDeleteTHead(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionCreateTFoot(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionDeleteTFoot(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionCreateCaption(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionDeleteCaption(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionInsertRow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableElementPrototypeFunctionDeleteRow(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLTableElementCaption(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementCaption(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementTHead(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementTHead(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementTFoot(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementTFoot(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementRows(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLTableElementTBodies(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLTableElementAlign(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementBgColor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementBgColor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementBorder(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementBorder(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementCellPadding(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementCellPadding(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementCellSpacing(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementCellSpacing(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementFrame(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementFrame(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementRules(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementRules(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementSummary(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementSummary(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLTableElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
