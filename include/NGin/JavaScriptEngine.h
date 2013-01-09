/* 
 * File:   JavaScriptEngine.h
 * Author: bcochrane
 *
 * Created on January 9, 2013, 10:06 AM
 */

#ifndef JAVASCRIPTENGINE_H
#define	JAVASCRIPTENGINE_H

#include "NGin/NGin.h"
#include "v8/v8.h"

class NGin::JavaScriptEngine : public NGin::ScriptEngine {
public:
    JavaScriptEngine(NGin::Graphics &graphics, NGin::ResourceManager &resources, NGin::Window &window);
    virtual ~JavaScriptEngine();
    
    void ExposeScriptInterface();
private:
    JavaScriptEngine(const NGin::JavaScriptEngine& orig);

};

#endif	/* JAVASCRIPTENGINE_H */

