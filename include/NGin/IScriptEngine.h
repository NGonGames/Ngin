/* 
 * File:   ScriptEngine.h
 * Author: Ben Cochrane
 *
 * Created on January 9, 2013, 10:00 AM
 */

#ifndef NGINSCRIPTENGINE_H
#define	NGINSCRIPTENGINE_H

#include "NGin/NGin.h"

class NGin::IScriptEngine {
    
public:
    void ExposeScriptInterface();
    
protected:
    NGin::Graphics *gfx;
    NGin::ResourceManager *rmgr;
    NGin::Window *wind;
};

#endif	/* NGINSCRIPTENGINE_H */

