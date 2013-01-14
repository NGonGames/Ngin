/* 
 * File:   NGin.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 11:36 AM
 */

#pragma once

namespace NGin {
    class Window;
    class ResourceManager;
    class Resource;
    class Graphics;
    class Texture;
    class Scene;
    class GameFactory;
    class Game;
    class GameLevel;
    class GameObject;
    
    bool Init();
    int Execute();
    void Quit();
}

#include "NGin/Graphics.h"
#include "NGin/ResourceManager.h"
#include "NGin/Window.h"
#include "NGin/Resource.h"
#include "NGin/Texture.h"
#include "NGin/Scene.h"
#include "NGin/GameObject.h"
#include "NGin/GameLevel.h"
#include "NGin/Game.h"
#include "NGin/GameFactory.h"

