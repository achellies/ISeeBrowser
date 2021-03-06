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
#include "JSSVGPathSegCurvetoCubicSmoothAbs.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegCurvetoCubicSmooth.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegCurvetoCubicSmoothAbs)

/* Hash table */

static const HashTableValue JSSVGPathSegCurvetoCubicSmoothAbsTableValues[5] =
{
    { "x", (intptr_t)JSSVGPathSegCurvetoCubicSmoothAbs::XAttrNum, DontDelete, 0 },
    { "y", (intptr_t)JSSVGPathSegCurvetoCubicSmoothAbs::YAttrNum, DontDelete, 0 },
    { "x2", (intptr_t)JSSVGPathSegCurvetoCubicSmoothAbs::X2AttrNum, DontDelete, 0 },
    { "y2", (intptr_t)JSSVGPathSegCurvetoCubicSmoothAbs::Y2AttrNum, DontDelete, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegCurvetoCubicSmoothAbsTable = { 7, JSSVGPathSegCurvetoCubicSmoothAbsTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoCubicSmoothAbsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegCurvetoCubicSmoothAbsPrototypeTable = { 0, JSSVGPathSegCurvetoCubicSmoothAbsPrototypeTableValues, 0 };

const ClassInfo JSSVGPathSegCurvetoCubicSmoothAbsPrototype::s_info = { "SVGPathSegCurvetoCubicSmoothAbsPrototype", 0, &JSSVGPathSegCurvetoCubicSmoothAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegCurvetoCubicSmoothAbsPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPathSegCurvetoCubicSmoothAbs.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPathSegCurvetoCubicSmoothAbsPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSSVGPathSegCurvetoCubicSmoothAbs::s_info = { "SVGPathSegCurvetoCubicSmoothAbs", &JSSVGPathSeg::s_info, &JSSVGPathSegCurvetoCubicSmoothAbsTable , 0 };

JSSVGPathSegCurvetoCubicSmoothAbs::JSSVGPathSegCurvetoCubicSmoothAbs(JSObject* prototype, SVGPathSegCurvetoCubicSmoothAbs* impl, SVGElement* context)
    : JSSVGPathSeg(prototype, impl, context)
{
}

bool JSSVGPathSegCurvetoCubicSmoothAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicSmoothAbs, Base>(exec, &JSSVGPathSegCurvetoCubicSmoothAbsTable, this, propertyName, slot);
}

JSValue* JSSVGPathSegCurvetoCubicSmoothAbs::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegCurvetoCubicSmoothAbs* imp = static_cast<SVGPathSegCurvetoCubicSmoothAbs*>(impl());
        return jsNumber(exec, imp->x());
    }
    case YAttrNum: {
        SVGPathSegCurvetoCubicSmoothAbs* imp = static_cast<SVGPathSegCurvetoCubicSmoothAbs*>(impl());
        return jsNumber(exec, imp->y());
    }
    case X2AttrNum: {
        SVGPathSegCurvetoCubicSmoothAbs* imp = static_cast<SVGPathSegCurvetoCubicSmoothAbs*>(impl());
        return jsNumber(exec, imp->x2());
    }
    case Y2AttrNum: {
        SVGPathSegCurvetoCubicSmoothAbs* imp = static_cast<SVGPathSegCurvetoCubicSmoothAbs*>(impl());
        return jsNumber(exec, imp->y2());
    }
    }
    return 0;
}

void JSSVGPathSegCurvetoCubicSmoothAbs::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegCurvetoCubicSmoothAbs, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoCubicSmoothAbsTable, this, slot);
}

void JSSVGPathSegCurvetoCubicSmoothAbs::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegCurvetoCubicSmoothAbs* imp = static_cast<SVGPathSegCurvetoCubicSmoothAbs*>(impl());
        imp->setX(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case YAttrNum: {
        SVGPathSegCurvetoCubicSmoothAbs* imp = static_cast<SVGPathSegCurvetoCubicSmoothAbs*>(impl());
        imp->setY(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case X2AttrNum: {
        SVGPathSegCurvetoCubicSmoothAbs* imp = static_cast<SVGPathSegCurvetoCubicSmoothAbs*>(impl());
        imp->setX2(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case Y2AttrNum: {
        SVGPathSegCurvetoCubicSmoothAbs* imp = static_cast<SVGPathSegCurvetoCubicSmoothAbs*>(impl());
        imp->setY2(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    }
}


}

#endif // ENABLE(SVG)
