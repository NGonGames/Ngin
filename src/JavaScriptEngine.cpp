/* 
 * File:   JavaScriptEngine.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 9, 2013, 10:06 AM
 */

#include "NGin/NGin.h"
#include "v8/v8.h"

using namespace NGin;
using namespace v8;

JavaScriptEngine::JavaScriptEngine(NGin::Graphics *graphics, NGin::ResourceManager *resources, NGin::Window *window) {
    gfx = graphics;
    rmgr = resources;
    wind = window;
}

JavaScriptEngine::~JavaScriptEngine() {
}

void JavaScriptEngine::ExposeScriptInterface() {
    /*v8::Locker locker;
    HandleScope handleScope;
    
    Handle<ObjectTemplate> globalTemplate = ObjectTemplate::New();
    globalTemplate->Set(String::New("version"), Number::New(1.1), ReadOnly);
    
    Handle<Context> context = Context::New(NULL, globalTemplate);
    
    Context::Scope contextScope(context);
    
    HandleScope scope;

    Persistent<ObjectTemplate> class_template;
    Handle<ObjectTemplate> raw_template = ObjectTemplate::New();
    raw_template->SetInternalFieldCount(1);
    class_template = Persistent<ObjectTemplate>::New( raw_template );
    Handle<Object> result = class_template->NewInstance();
    Handle<External> class_ptr = External::New(gfx); 
    result->SetInternalField( 0 , class_ptr );
    Handle<Object> jsGfx = scope.Close(result);*/
}