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

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGLineElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGLineElement.h"
#include "SVGStringList.h"

#include <kjs/Error.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGLineElement)

/* Hash table */

static const HashTableValue JSSVGLineElementTableValues[16] =
{
    { "x1", (intptr_t)JSSVGLineElement::X1AttrNum, DontDelete|ReadOnly, 0 },
    { "y1", (intptr_t)JSSVGLineElement::Y1AttrNum, DontDelete|ReadOnly, 0 },
    { "x2", (intptr_t)JSSVGLineElement::X2AttrNum, DontDelete|ReadOnly, 0 },
    { "y2", (intptr_t)JSSVGLineElement::Y2AttrNum, DontDelete|ReadOnly, 0 },
    { "requiredFeatures", (intptr_t)JSSVGLineElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredExtensions", (intptr_t)JSSVGLineElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0 },
    { "systemLanguage", (intptr_t)JSSVGLineElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0 },
    { "xmllang", (intptr_t)JSSVGLineElement::XmllangAttrNum, DontDelete, 0 },
    { "xmlspace", (intptr_t)JSSVGLineElement::XmlspaceAttrNum, DontDelete, 0 },
    { "externalResourcesRequired", (intptr_t)JSSVGLineElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0 },
    { "className", (intptr_t)JSSVGLineElement::ClassNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSSVGLineElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { "transform", (intptr_t)JSSVGLineElement::TransformAttrNum, DontDelete|ReadOnly, 0 },
    { "nearestViewportElement", (intptr_t)JSSVGLineElement::NearestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { "farthestViewportElement", (intptr_t)JSSVGLineElement::FarthestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGLineElementTable = { 1023, JSSVGLineElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGLineElementPrototypeTableValues[7] =
{
    { "hasExtension", (intptr_t)jsSVGLineElementPrototypeFunctionHasExtension, DontDelete|Function, 1 },
    { "getPresentationAttribute", (intptr_t)jsSVGLineElementPrototypeFunctionGetPresentationAttribute, DontDelete|Function, 1 },
    { "getBBox", (intptr_t)jsSVGLineElementPrototypeFunctionGetBBox, DontDelete|Function, 0 },
    { "getCTM", (intptr_t)jsSVGLineElementPrototypeFunctionGetCTM, DontDelete|Function, 0 },
    { "getScreenCTM", (intptr_t)jsSVGLineElementPrototypeFunctionGetScreenCTM, DontDelete|Function, 0 },
    { "getTransformToElement", (intptr_t)jsSVGLineElementPrototypeFunctionGetTransformToElement, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGLineElementPrototypeTable = { 2047, JSSVGLineElementPrototypeTableValues, 0 };

const ClassInfo JSSVGLineElementPrototype::s_info = { "SVGLineElementPrototype", 0, &JSSVGLineElementPrototypeTable, 0 };

JSObject* JSSVGLineElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGLineElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGLineElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGLineElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGLineElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGLineElement::s_info = { "SVGLineElement", &JSSVGElement::s_info, &JSSVGLineElementTable , 0 };

JSSVGLineElement::JSSVGLineElement(JSObject* prototype, SVGLineElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGLineElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLineElement, Base>(exec, &JSSVGLineElementTable, this, propertyName, slot);
}

JSValue* JSSVGLineElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case X1AttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->x1Animated();
        return toJS(exec, obj.get(), imp);
    }
    case Y1AttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->y1Animated();
        return toJS(exec, obj.get(), imp);
    }
    case X2AttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->x2Animated();
        return toJS(exec, obj.get(), imp);
    }
    case Y2AttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->y2Animated();
        return toJS(exec, obj.get(), imp);
    }
    case RequiredFeaturesAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case XmllangAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        return jsString(exec, imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        return jsString(exec, imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case TransformAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case NearestViewportElementAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
    }
    case FarthestViewportElementAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
    }
    }
    return 0;
}

void JSSVGLineElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGLineElement, Base>(exec, propertyName, value, &JSSVGLineElementTable, this, slot);
}

void JSSVGLineElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGLineElement* imp = static_cast<SVGLineElement*>(impl());
        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* jsSVGLineElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(thisValue);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());
    const UString& extension = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue* jsSVGLineElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(thisValue);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue* jsSVGLineElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(thisValue);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), imp);
    return result;
}

JSValue* jsSVGLineElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(thisValue);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getCTM()).get(), imp);
    return result;
}

JSValue* jsSVGLineElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(thisValue);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getScreenCTM()).get(), imp);
    return result;
}

JSValue* jsSVGLineElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGLineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGLineElement* castedThisObj = static_cast<JSSVGLineElement*>(thisValue);
    SVGLineElement* imp = static_cast<SVGLineElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(exec, 0));


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getTransformToElement(element, ec)).get(), imp);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG)
