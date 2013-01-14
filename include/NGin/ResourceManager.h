/* 
 * File:   ResourceManager.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 10:34 AM
 */

#pragma once

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <string>
#include <vector>
#include <utility>
#include "NGin.h"

class NGin::ResourceManager {
public:
    
    ResourceManager();
    virtual ~ResourceManager();
    
    bool AddImage(std::string name, std::string path);
    NGin::Texture* GetImage(std::string name);
    
        
private:
    
    ResourceManager(const NGin::ResourceManager& orig);
    std::vector<NGin::Texture*> mSprites;

};

