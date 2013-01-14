/* 
 * File:   NGinGraphics.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 11:12 AM
 */

#pragma once

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <string>
#include "NGin.h" 

class NGin::Graphics {
public:
    
    Graphics(NGin::ResourceManager *resources, NGin::Window *window);
    virtual ~Graphics();
    
    void Clear();
    void Clear(int r, int g, int b);
    void DrawImage(std::string, int x, int y);
    void Finalize();
    
private:
    Graphics(const NGin::Graphics& orig);
    
    NGin::ResourceManager* rmgr;
    NGin::Window* wind;
};

