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

#include "JSSVGPoint.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGMatrix.h"
#include "JSSVGPoint.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPoint);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPointTableValues[4] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPointX), (intptr_t)setJSSVGPointX THUNK_GENERATOR(0) },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPointY), (intptr_t)setJSSVGPointY THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPointConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPointTable = { 9, 7, JSSVGPointTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPointConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPointConstructorTable = { 1, 0, JSSVGPointConstructorTableValues, 0 };
class JSSVGPointConstructor : public DOMConstructorObject {
public:
    JSSVGPointConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPointConstructor::s_info = { "SVGPointConstructor", &DOMConstructorObject::s_info, &JSSVGPointConstructorTable, 0 };

JSSVGPointConstructor::JSSVGPointConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPointPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPointConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPointConstructor, JSDOMWrapper>(exec, &JSSVGPointConstructorTable, this, propertyName, slot);
}

bool JSSVGPointConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPointConstructor, JSDOMWrapper>(exec, &JSSVGPointConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPointPrototypeTableValues[2] =
{
    { "matrixTransform", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPointPrototypeFunctionMatrixTransform), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPointPrototypeTable = { 2, 1, JSSVGPointPrototypeTableValues, 0 };
const ClassInfo JSSVGPointPrototype::s_info = { "SVGPointPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPointPrototypeTable, 0 };

JSObject* JSSVGPointPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPoint>(exec, globalObject);
}

bool JSSVGPointPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPointPrototypeTable, this, propertyName, slot);
}

bool JSSVGPointPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGPointPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGPoint::s_info = { "SVGPoint", &JSDOMWrapper::s_info, &JSSVGPointTable, 0 };

JSSVGPoint::JSSVGPoint(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPropertyTearOff<FloatPoint> > impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPoint::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPointPrototype(exec->globalData(), globalObject, JSSVGPointPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSVGPoint::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPoint, Base>(exec, &JSSVGPointTable, this, propertyName, slot);
}

bool JSSVGPoint::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPoint, Base>(exec, &JSSVGPointTable, this, propertyName, descriptor);
}

JSValue jsSVGPointX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FloatPoint& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.x());
    return result;
}


JSValue jsSVGPointY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FloatPoint& imp = castedThis->impl()->propertyReference();
    JSValue result =  jsNumber(imp.y());
    return result;
}


JSValue jsSVGPointConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPoint* domObject = static_cast<JSSVGPoint*>(asObject(slotBase));
    return JSSVGPoint::getConstructor(exec, domObject->globalObject());
}

void JSSVGPoint::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPoint, Base>(exec, propertyName, value, &JSSVGPointTable, this, slot);
}

void setJSSVGPointX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(thisObject);
    SVGPropertyTearOff<FloatPoint> * imp = static_cast<SVGPropertyTearOff<FloatPoint> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatPoint& podImp = imp->propertyReference();
    podImp.setX(value.toFloat(exec));
    imp->commitChange();
}


void setJSSVGPointY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(thisObject);
    SVGPropertyTearOff<FloatPoint> * imp = static_cast<SVGPropertyTearOff<FloatPoint> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatPoint& podImp = imp->propertyReference();
    podImp.setY(value.toFloat(exec));
    imp->commitChange();
}


JSValue JSSVGPoint::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPointConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGPointPrototypeFunctionMatrixTransform(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPoint::s_info))
        return throwVMTypeError(exec);
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(asObject(thisValue));
    SVGPropertyTearOff<FloatPoint> * imp = static_cast<SVGPropertyTearOff<FloatPoint> *>(castedThis->impl());
    if (imp->role() == AnimValRole) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return JSValue::encode(jsUndefined());
    }
    FloatPoint& podImp = imp->propertyReference();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createSyntaxError(exec, "Not enough arguments"));
    if (exec->argumentCount() > 0 && !exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(&JSSVGMatrix::s_info))
        return throwVMTypeError(exec);
    SVGPropertyTearOff<SVGMatrix>* matrix(toSVGMatrix(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (!matrix) {
        setDOMException(exec, TYPE_MISMATCH_ERR);
        return JSValue::encode(jsUndefined());
    }


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(podImp.matrixTransform(matrix->propertyReference()))));
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<FloatPoint> * impl)
{
    return wrap<JSSVGPoint, SVGPropertyTearOff<FloatPoint> >(exec, globalObject, impl);
}

SVGPropertyTearOff<FloatPoint> * toSVGPoint(JSC::JSValue value)
{
    return value.inherits(&JSSVGPoint::s_info) ? static_cast<JSSVGPoint*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
