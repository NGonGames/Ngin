/* 
 * File:   NGin.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 11:36 AM
 */

#ifndef NGIN_H
#define	NGIN_H

namespace NGin {
    class Window;
    class ResourceManager;
    class Graphics;
    class Sprite;
    class IScriptEngine;
    class JavaScriptEngine;
    
    bool Init();
    int Execute();
    void Update();
    void Quit();
}

#include "NGin/Graphics.h"
#include "NGin/ResourceManager.h"
#include "NGin/Window.h"
#include "NGin/Sprite.h"
#include "NGin/IScriptEngine.h"
#include "NGin/JavaScriptEngine.h"

#endif	/* NGIN_H */

