/* 
 * File:   NGin.hpp
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 11:36 AM
 */

#pragma once

namespace NGin {
    
    class Window;
    class Graphics;
    class AudioContext;
    class GameFactory;
    class Application;
    class Vector2;
    class Input;
    
    namespace Game {
        
        class Object;
        class Level;
        class Graphic;
        class Animation;
        class Image;
        class Controller;
        class Mask;
        class PolyMask;
        class BitmapMask;
        class Tile;
        class TileMap;
        
    };
    
    namespace Resource {
        
        class Manager;
        class Resource;
        class Texture;
        class Scene;
        class Audio;
        
    };
    
    bool Init();
    int Execute();
    void Quit();
}

#include "NGin/Vector2.hpp"
#include "NGin/Resource.hpp"
#include "NGin/Texture.hpp"
#include "NGin/Graphic.hpp"
#include "NGin/Mask.hpp"
#include "NGin/PolyMask.hpp"
#include "NGin/BitmapMask.hpp"
#include "NGin/Image.hpp"
#include "NGin/Animation.hpp"
#include "NGin/Scene.hpp"
#include "NGin/Graphics.hpp"
#include "NGin/Audio.hpp"
#include "NGin/AudioContext.hpp"
#include "NGin/Manager.hpp"
#include "NGin/Window.hpp"
#include "NGin/Object.hpp"
#include "NGin/Tile.hpp"
#include "NGin/TileMap.hpp"
#include "NGin/Level.hpp"
#include "NGin/Application.hpp"
#include "NGin/GameFactory.hpp"
#include "NGin/Input.hpp"
#include "NGin/Controller.hpp"