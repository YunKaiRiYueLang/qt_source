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
#include "JSHTMLFontElement.h"

#include "HTMLFontElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLFontElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLFontElementTableValues[5] =
{
    { "color", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFontElementColor), (intptr_t)setJSHTMLFontElementColor THUNK_GENERATOR(0) },
    { "face", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFontElementFace), (intptr_t)setJSHTMLFontElementFace THUNK_GENERATOR(0) },
    { "size", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFontElementSize), (intptr_t)setJSHTMLFontElementSize THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLFontElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLFontElementTable = { 9, 7, JSHTMLFontElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLFontElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLFontElementConstructorTable = { 1, 0, JSHTMLFontElementConstructorTableValues, 0 };
class JSHTMLFontElementConstructor : public DOMConstructorObject {
public:
    JSHTMLFontElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLFontElementConstructor::s_info = { "HTMLFontElementConstructor", &DOMConstructorObject::s_info, &JSHTMLFontElementConstructorTable, 0 };

JSHTMLFontElementConstructor::JSHTMLFontElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLFontElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLFontElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFontElementConstructor, JSDOMWrapper>(exec, &JSHTMLFontElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLFontElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLFontElementConstructor, JSDOMWrapper>(exec, &JSHTMLFontElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLFontElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLFontElementPrototypeTable = { 1, 0, JSHTMLFontElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLFontElementPrototype::s_info = { "HTMLFontElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLFontElementPrototypeTable, 0 };

JSObject* JSHTMLFontElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLFontElement>(exec, globalObject);
}

const ClassInfo JSHTMLFontElement::s_info = { "HTMLFontElement", &JSHTMLElement::s_info, &JSHTMLFontElementTable, 0 };

JSHTMLFontElement::JSHTMLFontElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFontElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLFontElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLFontElementPrototype(exec->globalData(), globalObject, JSHTMLFontElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLFontElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFontElement, Base>(exec, &JSHTMLFontElementTable, this, propertyName, slot);
}

bool JSHTMLFontElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLFontElement, Base>(exec, &JSHTMLFontElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLFontElementColor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLFontElement* castedThis = static_cast<JSHTMLFontElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFontElement* imp = static_cast<HTMLFontElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::colorAttr));
    return result;
}


JSValue jsHTMLFontElementFace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLFontElement* castedThis = static_cast<JSHTMLFontElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFontElement* imp = static_cast<HTMLFontElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::faceAttr));
    return result;
}


JSValue jsHTMLFontElementSize(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLFontElement* castedThis = static_cast<JSHTMLFontElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLFontElement* imp = static_cast<HTMLFontElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::sizeAttr));
    return result;
}


JSValue jsHTMLFontElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLFontElement* domObject = static_cast<JSHTMLFontElement*>(asObject(slotBase));
    return JSHTMLFontElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLFontElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLFontElement, Base>(exec, propertyName, value, &JSHTMLFontElementTable, this, slot);
}

void setJSHTMLFontElementColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLFontElement* castedThis = static_cast<JSHTMLFontElement*>(thisObject);
    HTMLFontElement* imp = static_cast<HTMLFontElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::colorAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLFontElementFace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLFontElement* castedThis = static_cast<JSHTMLFontElement*>(thisObject);
    HTMLFontElement* imp = static_cast<HTMLFontElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::faceAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLFontElementSize(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLFontElement* castedThis = static_cast<JSHTMLFontElement*>(thisObject);
    HTMLFontElement* imp = static_cast<HTMLFontElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::sizeAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLFontElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLFontElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
