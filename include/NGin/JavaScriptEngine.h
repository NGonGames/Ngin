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

class NGin::JavaScriptEngine : public NGin::IScriptEngine {
public:

    virtual ~JavaScriptEngine();
    void ExposeScriptInterface();
    
private:

};

#endif	/* JAVASCRIPTENGINE_H */

