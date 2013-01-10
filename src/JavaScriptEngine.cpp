/* 
 * File:   JavaScriptEngine.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 9, 2013, 10:06 AM
 */

#include "NGin/NGin.h"

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
    
}