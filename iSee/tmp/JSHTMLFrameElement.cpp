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

#include "JSHTMLFrameElement.h"

#include <wtf/GetPtr.h>

#include "DOMWindow.h"
#include "Document.h"
#include "HTMLFrameElement.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDocument.h"
#include "KURL.h"

#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLFrameElement)

/* Hash table */

static const HashTableValue JSHTMLFrameElementTableValues[15] =
{
    { "frameBorder", (intptr_t)JSHTMLFrameElement::FrameBorderAttrNum, DontDelete, 0 },
    { "longDesc", (intptr_t)JSHTMLFrameElement::LongDescAttrNum, DontDelete, 0 },
    { "marginHeight", (intptr_t)JSHTMLFrameElement::MarginHeightAttrNum, DontDelete, 0 },
    { "marginWidth", (intptr_t)JSHTMLFrameElement::MarginWidthAttrNum, DontDelete, 0 },
    { "name", (intptr_t)JSHTMLFrameElement::NameAttrNum, DontDelete, 0 },
    { "noResize", (intptr_t)JSHTMLFrameElement::NoResizeAttrNum, DontDelete, 0 },
    { "scrolling", (intptr_t)JSHTMLFrameElement::ScrollingAttrNum, DontDelete, 0 },
    { "src", (intptr_t)JSHTMLFrameElement::SrcAttrNum, DontDelete, 0 },
    { "contentDocument", (intptr_t)JSHTMLFrameElement::ContentDocumentAttrNum, DontDelete|ReadOnly, 0 },
    { "contentWindow", (intptr_t)JSHTMLFrameElement::ContentWindowAttrNum, DontDelete|ReadOnly, 0 },
    { "location", (intptr_t)JSHTMLFrameElement::LocationAttrNum, DontDelete, 0 },
    { "width", (intptr_t)JSHTMLFrameElement::WidthAttrNum, DontDelete|ReadOnly, 0 },
    { "height", (intptr_t)JSHTMLFrameElement::HeightAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSHTMLFrameElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameElementTable = { 16383, JSHTMLFrameElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLFrameElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameElementConstructorTable = { 0, JSHTMLFrameElementConstructorTableValues, 0 };

class JSHTMLFrameElementConstructor : public DOMObject {
public:
    JSHTMLFrameElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLFrameElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLFrameElementConstructor::s_info = { "HTMLFrameElementConstructor", 0, &JSHTMLFrameElementConstructorTable, 0 };

bool JSHTMLFrameElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFrameElementConstructor, DOMObject>(exec, &JSHTMLFrameElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLFrameElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLFrameElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameElementPrototypeTable = { 0, JSHTMLFrameElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLFrameElementPrototype::s_info = { "HTMLFrameElementPrototype", 0, &JSHTMLFrameElementPrototypeTable, 0 };

JSObject* JSHTMLFrameElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSHTMLFrameElement.prototype]]");
    return JSC::cacheGlobalObject<JSHTMLFrameElementPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSHTMLFrameElement::s_info = { "HTMLFrameElement", &JSHTMLElement::s_info, &JSHTMLFrameElementTable , 0 };

JSHTMLFrameElement::JSHTMLFrameElement(JSObject* prototype, HTMLFrameElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLFrameElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFrameElement, Base>(exec, &JSHTMLFrameElementTable, this, propertyName, slot);
}

JSValue* JSHTMLFrameElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case FrameBorderAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsString(exec, imp->frameBorder());
    }
    case LongDescAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsString(exec, imp->longDesc());
    }
    case MarginHeightAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsString(exec, imp->marginHeight());
    }
    case MarginWidthAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsString(exec, imp->marginWidth());
    }
    case NameAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsString(exec, imp->name());
    }
    case NoResizeAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsBoolean(imp->noResize());
    }
    case ScrollingAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsString(exec, imp->scrolling());
    }
    case SrcAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsString(exec, imp->src());
    }
    case ContentDocumentAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return checkNodeSecurity(exec, imp->contentDocument()) ? toJS(exec, WTF::getPtr(imp->contentDocument())) : jsUndefined();
    }
    case ContentWindowAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->contentWindow()));
    }
    case LocationAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsString(exec, imp->location());
    }
    case WidthAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsNumber(exec, imp->width());
    }
    case HeightAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        return jsNumber(exec, imp->height());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLFrameElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLFrameElement, Base>(exec, propertyName, value, &JSHTMLFrameElementTable, this, slot);
}

void JSHTMLFrameElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case FrameBorderAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        imp->setFrameBorder(valueToStringWithNullCheck(exec, value));
        break;
    }
    case LongDescAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        imp->setLongDesc(valueToStringWithNullCheck(exec, value));
        break;
    }
    case MarginHeightAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        imp->setMarginHeight(valueToStringWithNullCheck(exec, value));
        break;
    }
    case MarginWidthAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        imp->setMarginWidth(valueToStringWithNullCheck(exec, value));
        break;
    }
    case NameAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case NoResizeAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        imp->setNoResize(value->toBoolean(exec));
        break;
    }
    case ScrollingAttrNum: {
        HTMLFrameElement* imp = static_cast<HTMLFrameElement*>(impl());
        imp->setScrolling(valueToStringWithNullCheck(exec, value));
        break;
    }
    case SrcAttrNum: {
        setSrc(exec, value);
        break;
    }
    case LocationAttrNum: {
        setLocation(exec, value);
        break;
    }
    }
}

JSValue* JSHTMLFrameElement::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[HTMLFrameElement.constructor]]");
    return JSC::cacheGlobalObject<JSHTMLFrameElementConstructor>(exec, *constructorIdentifier);
}


}