/* 
 * File:   NGin.h
 * Author: bcochrane
 *
 * Created on December 14, 2012, 11:36 AM
 */

#ifndef NGIN_H
#define	NGIN_H

namespace NGin {
    class Window;
    class ResourceManager;
    class Graphics;
    
    bool Init();
    void Execute();
    void Update();
    void Quit();
}

#include "NGin/Graphics.h"
#include "NGin/ResourceManager.h"
#include "NGin/Window.h"

#endif	/* NGIN_H */

