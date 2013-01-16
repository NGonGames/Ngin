/* 
 * File:   NGinGraphics.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 11:12 AM
 */

#pragma once

#include "NGin/ResourceManager.hpp"
#include "NGin/Window.hpp"

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <string>

class NGin::Graphics {
public:
    
    Graphics(NGin::Window *window);
    virtual ~Graphics();
    
    void Clear();
    void Clear(int r, int g, int b);
    void SetOffset(NGin::Vector2 &offset);
    void DrawTexture(NGin::Texture *texture, NGin::Vector2 *pos);
    void DrawTexture(NGin::Texture *texture, NGin::Vector2 *pos, NGin::Vector2 *clipPos, NGin::Vector2 *clipSize);
    void Finalize();
    
private:
    Graphics(const NGin::Graphics& orig);
    NGin::Vector2 *offset;
    NGin::Window* wind;
};

