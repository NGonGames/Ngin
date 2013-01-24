/* 
 * File:   NGin.hpp
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 11:36 AM
 */

#pragma once

namespace NGin {
    
    class GameFactory;
    class Application;
    class Window;
    class Input;
    class AudioContext;
    class RenderContext;
    
    namespace Game {
        
        class Object;
        class Camera;
        class Level;
        class Graphic;
        class Animation;
        class Image;
        class Controller;
        class Mask;
        class RectMask;
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
    
    namespace Math {
        
        class Vector2;
        class Vector3;
        class Vector4;
        class Rectangle;
        class Matrix3x3;
        class Matrix4x4;
        
    };

}

#include "NGin/Vector2.hpp"
#include "NGin/Vector3.hpp"
#include "NGin/Vector4.hpp"
#include "NGin/Rectangle.hpp"
#include "NGin/Resource.hpp"
#include "NGin/Texture.hpp"
#include "NGin/Graphic.hpp"
#include "NGin/Mask.hpp"
#include "NGin/PolyMask.hpp"
#include "NGin/BitmapMask.hpp"
#include "NGin/RectMask.hpp"
#include "NGin/Image.hpp"
#include "NGin/Animation.hpp"
#include "NGin/Scene.hpp"
#include "NGin/RenderContext.hpp"
#include "NGin/Audio.hpp"
#include "NGin/AudioContext.hpp"
#include "NGin/Manager.hpp"
#include "NGin/Window.hpp"
#include "NGin/Object.hpp"
#include "NGin/Camera.hpp"
#include "NGin/Tile.hpp"
#include "NGin/TileMap.hpp"
#include "NGin/Level.hpp"
#include "NGin/Application.hpp"
#include "NGin/GameFactory.hpp"
#include "NGin/Input.hpp"
#include "NGin/Controller.hpp"