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
#include "JSDOMPlugin.h"

#include "DOMMimeType.h"
#include "DOMPlugin.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMMimeType.h"
#include "KURL.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDOMPlugin);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMPluginTableValues[6] =
{
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "filename", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginFilename), (intptr_t)0 THUNK_GENERATOR(0) },
    { "description", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginDescription), (intptr_t)0 THUNK_GENERATOR(0) },
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMPluginConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMPluginTable = { 17, 15, JSDOMPluginTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMPluginConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMPluginConstructorTable = { 1, 0, JSDOMPluginConstructorTableValues, 0 };
class JSDOMPluginConstructor : public DOMConstructorObject {
public:
    JSDOMPluginConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSDOMPluginConstructor::s_info = { "PluginConstructor", &DOMConstructorObject::s_info, &JSDOMPluginConstructorTable, 0 };

JSDOMPluginConstructor::JSDOMPluginConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDOMPluginPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDOMPluginConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMPluginConstructor, JSDOMWrapper>(exec, &JSDOMPluginConstructorTable, this, propertyName, slot);
}

bool JSDOMPluginConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMPluginConstructor, JSDOMWrapper>(exec, &JSDOMPluginConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMPluginPrototypeTableValues[3] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDOMPluginPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "namedItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDOMPluginPrototypeFunctionNamedItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMPluginPrototypeTable = { 5, 3, JSDOMPluginPrototypeTableValues, 0 };
const ClassInfo JSDOMPluginPrototype::s_info = { "PluginPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSDOMPluginPrototypeTable, 0 };

JSObject* JSDOMPluginPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMPlugin>(exec, globalObject);
}

bool JSDOMPluginPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMPluginPrototypeTable, this, propertyName, slot);
}

bool JSDOMPluginPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDOMPluginPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSDOMPlugin::s_info = { "Plugin", &JSDOMWrapper::s_info, &JSDOMPluginTable, 0 };

JSDOMPlugin::JSDOMPlugin(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMPlugin> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMPlugin::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDOMPluginPrototype(exec->globalData(), globalObject, JSDOMPluginPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSDOMPlugin::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSDOMPluginTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<DOMPlugin*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<DOMPlugin*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSDOMPlugin, Base>(exec, &JSDOMPluginTable, this, propertyName, slot);
}

bool JSDOMPlugin::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    const HashEntry* entry = JSDOMPluginTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<DOMPlugin*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<DOMPlugin*>(impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(this, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSDOMPlugin, Base>(exec, &JSDOMPluginTable, this, propertyName, descriptor);
}

bool JSDOMPlugin::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<DOMPlugin*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsDOMPluginName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMPlugin* castedThis = static_cast<JSDOMPlugin*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMPlugin* imp = static_cast<DOMPlugin*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}


JSValue jsDOMPluginFilename(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMPlugin* castedThis = static_cast<JSDOMPlugin*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMPlugin* imp = static_cast<DOMPlugin*>(castedThis->impl());
    JSValue result = jsString(exec, imp->filename());
    return result;
}


JSValue jsDOMPluginDescription(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMPlugin* castedThis = static_cast<JSDOMPlugin*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMPlugin* imp = static_cast<DOMPlugin*>(castedThis->impl());
    JSValue result = jsString(exec, imp->description());
    return result;
}


JSValue jsDOMPluginLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMPlugin* castedThis = static_cast<JSDOMPlugin*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMPlugin* imp = static_cast<DOMPlugin*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsDOMPluginConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMPlugin* domObject = static_cast<JSDOMPlugin*>(asObject(slotBase));
    return JSDOMPlugin::getConstructor(exec, domObject->globalObject());
}

void JSDOMPlugin::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<DOMPlugin*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSDOMPlugin::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMPluginConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMPluginPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMPlugin::s_info))
        return throwVMTypeError(exec);
    JSDOMPlugin* castedThis = static_cast<JSDOMPlugin*>(asObject(thisValue));
    DOMPlugin* imp = static_cast<DOMPlugin*>(castedThis->impl());
    unsigned index(exec->argument(0).toUInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMPluginPrototypeFunctionNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMPlugin::s_info))
        return throwVMTypeError(exec);
    JSDOMPlugin* castedThis = static_cast<JSDOMPlugin*>(asObject(thisValue));
    DOMPlugin* imp = static_cast<DOMPlugin*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->namedItem(name)));
    return JSValue::encode(result);
}


JSValue JSDOMPlugin::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSDOMPlugin* thisObj = static_cast<JSDOMPlugin*>(asObject(slotBase));
    return toJS(exec, thisObj->globalObject(), static_cast<DOMPlugin*>(thisObj->impl())->item(index));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMPlugin* impl)
{
    return wrap<JSDOMPlugin>(exec, globalObject, impl);
}

DOMPlugin* toDOMPlugin(JSC::JSValue value)
{
    return value.inherits(&JSDOMPlugin::s_info) ? static_cast<JSDOMPlugin*>(asObject(value))->impl() : 0;
}

}
