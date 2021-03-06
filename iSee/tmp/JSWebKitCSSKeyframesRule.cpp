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

#include "JSWebKitCSSKeyframesRule.h"

#include <wtf/GetPtr.h>

#include <kjs/PropertyNameArray.h>
#include "CSSRuleList.h"
#include "JSCSSRuleList.h"
#include "JSWebKitCSSKeyframeRule.h"
#include "KURL.h"
#include "WebKitCSSKeyframeRule.h"
#include "WebKitCSSKeyframesRule.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebKitCSSKeyframesRule)

/* Hash table */

static const HashTableValue JSWebKitCSSKeyframesRuleTableValues[4] =
{
    { "name", (intptr_t)JSWebKitCSSKeyframesRule::NameAttrNum, DontDelete, 0 },
    { "cssRules", (intptr_t)JSWebKitCSSKeyframesRule::CssRulesAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSWebKitCSSKeyframesRule::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframesRuleTable = { 127, JSWebKitCSSKeyframesRuleTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSWebKitCSSKeyframesRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframesRuleConstructorTable = { 0, JSWebKitCSSKeyframesRuleConstructorTableValues, 0 };

class JSWebKitCSSKeyframesRuleConstructor : public DOMObject {
public:
    JSWebKitCSSKeyframesRuleConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSWebKitCSSKeyframesRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSWebKitCSSKeyframesRuleConstructor::s_info = { "WebKitCSSKeyframesRuleConstructor", 0, &JSWebKitCSSKeyframesRuleConstructorTable, 0 };

bool JSWebKitCSSKeyframesRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSKeyframesRuleConstructor, DOMObject>(exec, &JSWebKitCSSKeyframesRuleConstructorTable, this, propertyName, slot);
}

JSValue* JSWebKitCSSKeyframesRuleConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSWebKitCSSKeyframesRulePrototypeTableValues[4] =
{
    { "insertRule", (intptr_t)jsWebKitCSSKeyframesRulePrototypeFunctionInsertRule, DontDelete|Function, 1 },
    { "deleteRule", (intptr_t)jsWebKitCSSKeyframesRulePrototypeFunctionDeleteRule, DontDelete|Function, 1 },
    { "findRule", (intptr_t)jsWebKitCSSKeyframesRulePrototypeFunctionFindRule, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframesRulePrototypeTable = { 7, JSWebKitCSSKeyframesRulePrototypeTableValues, 0 };

const ClassInfo JSWebKitCSSKeyframesRulePrototype::s_info = { "WebKitCSSKeyframesRulePrototype", 0, &JSWebKitCSSKeyframesRulePrototypeTable, 0 };

JSObject* JSWebKitCSSKeyframesRulePrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSWebKitCSSKeyframesRule.prototype]]");
    return JSC::cacheGlobalObject<JSWebKitCSSKeyframesRulePrototype>(exec, *prototypeIdentifier);
}

bool JSWebKitCSSKeyframesRulePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSWebKitCSSKeyframesRulePrototypeTable, this, propertyName, slot);
}

const ClassInfo JSWebKitCSSKeyframesRule::s_info = { "WebKitCSSKeyframesRule", &JSCSSRule::s_info, &JSWebKitCSSKeyframesRuleTable , 0 };

JSWebKitCSSKeyframesRule::JSWebKitCSSKeyframesRule(JSObject* prototype, WebKitCSSKeyframesRule* impl)
    : JSCSSRule(prototype, impl)
{
}

bool JSWebKitCSSKeyframesRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSWebKitCSSKeyframesRuleTable.entry(exec, propertyName);
    if (entry) {
        slot.setStaticEntry(this, entry, staticValueGetter<JSWebKitCSSKeyframesRule>);
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<WebKitCSSKeyframesRule*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSWebKitCSSKeyframesRule, Base>(exec, &JSWebKitCSSKeyframesRuleTable, this, propertyName, slot);
}

bool JSWebKitCSSKeyframesRule::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<WebKitCSSKeyframesRule*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue* JSWebKitCSSKeyframesRule::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NameAttrNum: {
        WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(impl());
        return jsStringOrNull(exec, imp->name());
    }
    case CssRulesAttrNum: {
        WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(impl());
        return toJS(exec, WTF::getPtr(imp->cssRules()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSWebKitCSSKeyframesRule::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSWebKitCSSKeyframesRule, Base>(exec, propertyName, value, &JSWebKitCSSKeyframesRuleTable, this, slot);
}

void JSWebKitCSSKeyframesRule::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case NameAttrNum: {
        WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(impl());
        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

void JSWebKitCSSKeyframesRule::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<WebKitCSSKeyframesRule*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}

JSValue* JSWebKitCSSKeyframesRule::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[WebKitCSSKeyframesRule.constructor]]");
    return JSC::cacheGlobalObject<JSWebKitCSSKeyframesRuleConstructor>(exec, *constructorIdentifier);
}

JSValue* jsWebKitCSSKeyframesRulePrototypeFunctionInsertRule(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSWebKitCSSKeyframesRule::s_info))
        return throwError(exec, TypeError);
    JSWebKitCSSKeyframesRule* castedThisObj = static_cast<JSWebKitCSSKeyframesRule*>(thisValue);
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThisObj->impl());
    const UString& rule = args.at(exec, 0)->toString(exec);

    imp->insertRule(rule);
    return jsUndefined();
}

JSValue* jsWebKitCSSKeyframesRulePrototypeFunctionDeleteRule(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSWebKitCSSKeyframesRule::s_info))
        return throwError(exec, TypeError);
    JSWebKitCSSKeyframesRule* castedThisObj = static_cast<JSWebKitCSSKeyframesRule*>(thisValue);
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThisObj->impl());
    const UString& key = args.at(exec, 0)->toString(exec);

    imp->deleteRule(key);
    return jsUndefined();
}

JSValue* jsWebKitCSSKeyframesRulePrototypeFunctionFindRule(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSWebKitCSSKeyframesRule::s_info))
        return throwError(exec, TypeError);
    JSWebKitCSSKeyframesRule* castedThisObj = static_cast<JSWebKitCSSKeyframesRule*>(thisValue);
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThisObj->impl());
    const UString& key = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->findRule(key)));
    return result;
}


JSValue* JSWebKitCSSKeyframesRule::indexGetter(ExecState* exec, const Identifier& propertyName, const PropertySlot& slot)
{
    JSWebKitCSSKeyframesRule* thisObj = static_cast<JSWebKitCSSKeyframesRule*>(slot.slotBase());
    return toJS(exec, static_cast<WebKitCSSKeyframesRule*>(thisObj->impl())->item(slot.index()));
}

}
