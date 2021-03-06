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

#include "JSProgressEvent.h"

#include <wtf/GetPtr.h>

#include "ProgressEvent.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSProgressEvent)

/* Hash table */

static const HashTableValue JSProgressEventTableValues[5] =
{
    { "lengthComputable", (intptr_t)JSProgressEvent::LengthComputableAttrNum, DontDelete|ReadOnly, 0 },
    { "loaded", (intptr_t)JSProgressEvent::LoadedAttrNum, DontDelete|ReadOnly, 0 },
    { "total", (intptr_t)JSProgressEvent::TotalAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSProgressEvent::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSProgressEventTable = { 15, JSProgressEventTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSProgressEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSProgressEventConstructorTable = { 0, JSProgressEventConstructorTableValues, 0 };

class JSProgressEventConstructor : public DOMObject {
public:
    JSProgressEventConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSProgressEventPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSProgressEventConstructor::s_info = { "ProgressEventConstructor", 0, &JSProgressEventConstructorTable, 0 };

bool JSProgressEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSProgressEventConstructor, DOMObject>(exec, &JSProgressEventConstructorTable, this, propertyName, slot);
}

JSValue* JSProgressEventConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSProgressEventPrototypeTableValues[2] =
{
    { "initProgressEvent", (intptr_t)jsProgressEventPrototypeFunctionInitProgressEvent, DontDelete|Function, 6 },
    { 0, 0, 0, 0 }
};

static const HashTable JSProgressEventPrototypeTable = { 0, JSProgressEventPrototypeTableValues, 0 };

const ClassInfo JSProgressEventPrototype::s_info = { "ProgressEventPrototype", 0, &JSProgressEventPrototypeTable, 0 };

JSObject* JSProgressEventPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSProgressEvent.prototype]]");
    return JSC::cacheGlobalObject<JSProgressEventPrototype>(exec, *prototypeIdentifier);
}

bool JSProgressEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSProgressEventPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSProgressEvent::s_info = { "ProgressEvent", &JSEvent::s_info, &JSProgressEventTable , 0 };

JSProgressEvent::JSProgressEvent(JSObject* prototype, ProgressEvent* impl)
    : JSEvent(prototype, impl)
{
}

bool JSProgressEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSProgressEvent, Base>(exec, &JSProgressEventTable, this, propertyName, slot);
}

JSValue* JSProgressEvent::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthComputableAttrNum: {
        ProgressEvent* imp = static_cast<ProgressEvent*>(impl());
        return jsBoolean(imp->lengthComputable());
    }
    case LoadedAttrNum: {
        ProgressEvent* imp = static_cast<ProgressEvent*>(impl());
        return jsNumber(exec, imp->loaded());
    }
    case TotalAttrNum: {
        ProgressEvent* imp = static_cast<ProgressEvent*>(impl());
        return jsNumber(exec, imp->total());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSProgressEvent::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[ProgressEvent.constructor]]");
    return JSC::cacheGlobalObject<JSProgressEventConstructor>(exec, *constructorIdentifier);
}

JSValue* jsProgressEventPrototypeFunctionInitProgressEvent(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSProgressEvent::s_info))
        return throwError(exec, TypeError);
    JSProgressEvent* castedThisObj = static_cast<JSProgressEvent*>(thisValue);
    ProgressEvent* imp = static_cast<ProgressEvent*>(castedThisObj->impl());
    const UString& typeArg = args.at(exec, 0)->toString(exec);
    bool canBubbleArg = args.at(exec, 1)->toBoolean(exec);
    bool cancelableArg = args.at(exec, 2)->toBoolean(exec);
    bool lengthComputableArg = args.at(exec, 3)->toBoolean(exec);
    unsigned loadedArg = args.at(exec, 4)->toInt32(exec);
    unsigned totalArg = args.at(exec, 5)->toInt32(exec);

    imp->initProgressEvent(typeArg, canBubbleArg, cancelableArg, lengthComputableArg, loadedArg, totalArg);
    return jsUndefined();
}


}
