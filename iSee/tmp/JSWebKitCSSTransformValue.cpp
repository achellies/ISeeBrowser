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

#include "JSWebKitCSSTransformValue.h"

#include <wtf/GetPtr.h>

#include "WebKitCSSTransformValue.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebKitCSSTransformValue)

/* Hash table */

static const HashTableValue JSWebKitCSSTransformValueTableValues[3] =
{
    { "operationType", (intptr_t)JSWebKitCSSTransformValue::OperationTypeAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSWebKitCSSTransformValue::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSTransformValueTable = { 15, JSWebKitCSSTransformValueTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSWebKitCSSTransformValueConstructorTableValues[12] =
{
    { "CSS_TRANSLATE", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "CSS_TRANSLATEX", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "CSS_TRANSLATEY", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "CSS_ROTATE", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "CSS_SCALE", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "CSS_SCALEX", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "CSS_SCALEY", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { "CSS_SKEW", (intptr_t)8, DontDelete|ReadOnly, 0 },
    { "CSS_SKEWX", (intptr_t)9, DontDelete|ReadOnly, 0 },
    { "CSS_SKEWY", (intptr_t)10, DontDelete|ReadOnly, 0 },
    { "CSS_MATRIX", (intptr_t)11, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSTransformValueConstructorTable = { 1023, JSWebKitCSSTransformValueConstructorTableValues, 0 };

class JSWebKitCSSTransformValueConstructor : public DOMObject {
public:
    JSWebKitCSSTransformValueConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSWebKitCSSTransformValuePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSWebKitCSSTransformValueConstructor::s_info = { "WebKitCSSTransformValueConstructor", 0, &JSWebKitCSSTransformValueConstructorTable, 0 };

bool JSWebKitCSSTransformValueConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSTransformValueConstructor, DOMObject>(exec, &JSWebKitCSSTransformValueConstructorTable, this, propertyName, slot);
}

JSValue* JSWebKitCSSTransformValueConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSWebKitCSSTransformValuePrototypeTableValues[12] =
{
    { "CSS_TRANSLATE", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "CSS_TRANSLATEX", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "CSS_TRANSLATEY", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "CSS_ROTATE", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "CSS_SCALE", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "CSS_SCALEX", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "CSS_SCALEY", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { "CSS_SKEW", (intptr_t)8, DontDelete|ReadOnly, 0 },
    { "CSS_SKEWX", (intptr_t)9, DontDelete|ReadOnly, 0 },
    { "CSS_SKEWY", (intptr_t)10, DontDelete|ReadOnly, 0 },
    { "CSS_MATRIX", (intptr_t)11, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSTransformValuePrototypeTable = { 1023, JSWebKitCSSTransformValuePrototypeTableValues, 0 };

const ClassInfo JSWebKitCSSTransformValuePrototype::s_info = { "WebKitCSSTransformValuePrototype", 0, &JSWebKitCSSTransformValuePrototypeTable, 0 };

JSObject* JSWebKitCSSTransformValuePrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSWebKitCSSTransformValue.prototype]]");
    return JSC::cacheGlobalObject<JSWebKitCSSTransformValuePrototype>(exec, *prototypeIdentifier);
}

bool JSWebKitCSSTransformValuePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSTransformValuePrototype, JSObject>(exec, &JSWebKitCSSTransformValuePrototypeTable, this, propertyName, slot);
}

JSValue* JSWebKitCSSTransformValuePrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSWebKitCSSTransformValue::s_info = { "WebKitCSSTransformValue", &JSCSSValueList::s_info, &JSWebKitCSSTransformValueTable , 0 };

JSWebKitCSSTransformValue::JSWebKitCSSTransformValue(JSObject* prototype, WebKitCSSTransformValue* impl)
    : JSCSSValueList(prototype, impl)
{
}

bool JSWebKitCSSTransformValue::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSTransformValue, Base>(exec, &JSWebKitCSSTransformValueTable, this, propertyName, slot);
}

JSValue* JSWebKitCSSTransformValue::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case OperationTypeAttrNum: {
        WebKitCSSTransformValue* imp = static_cast<WebKitCSSTransformValue*>(impl());
        return jsNumber(exec, imp->operationType());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSWebKitCSSTransformValue::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[WebKitCSSTransformValue.constructor]]");
    return JSC::cacheGlobalObject<JSWebKitCSSTransformValueConstructor>(exec, *constructorIdentifier);
}


}
