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


#if ENABLE(SVG) && ENABLE(SVG_FILTERS)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFEMergeElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEMergeElement.h"

#include <kjs/Error.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEMergeElement)

/* Hash table */

static const HashTableValue JSSVGFEMergeElementTableValues[8] =
{
    { "x", (intptr_t)JSSVGFEMergeElement::XAttrNum, DontDelete|ReadOnly, 0 },
    { "y", (intptr_t)JSSVGFEMergeElement::YAttrNum, DontDelete|ReadOnly, 0 },
    { "width", (intptr_t)JSSVGFEMergeElement::WidthAttrNum, DontDelete|ReadOnly, 0 },
    { "height", (intptr_t)JSSVGFEMergeElement::HeightAttrNum, DontDelete|ReadOnly, 0 },
    { "result", (intptr_t)JSSVGFEMergeElement::ResultAttrNum, DontDelete|ReadOnly, 0 },
    { "className", (intptr_t)JSSVGFEMergeElement::ClassNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSSVGFEMergeElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEMergeElementTable = { 255, JSSVGFEMergeElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGFEMergeElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", (intptr_t)jsSVGFEMergeElementPrototypeFunctionGetPresentationAttribute, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEMergeElementPrototypeTable = { 0, JSSVGFEMergeElementPrototypeTableValues, 0 };

const ClassInfo JSSVGFEMergeElementPrototype::s_info = { "SVGFEMergeElementPrototype", 0, &JSSVGFEMergeElementPrototypeTable, 0 };

JSObject* JSSVGFEMergeElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGFEMergeElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGFEMergeElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGFEMergeElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEMergeElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGFEMergeElement::s_info = { "SVGFEMergeElement", &JSSVGElement::s_info, &JSSVGFEMergeElementTable , 0 };

JSSVGFEMergeElement::JSSVGFEMergeElement(JSObject* prototype, SVGFEMergeElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGFEMergeElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEMergeElement, Base>(exec, &JSSVGFEMergeElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEMergeElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case WidthAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HeightAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ResultAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}

JSValue* jsSVGFEMergeElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGFEMergeElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFEMergeElement* castedThisObj = static_cast<JSSVGFEMergeElement*>(thisValue);
    SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)