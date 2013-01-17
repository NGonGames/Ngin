/* 
 * File:   ResourceManager.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 10:34 AM
 */

#pragma once

#include "NGin/Texture.hpp"
#include "NGin/Scene.hpp"

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <string>
#include <vector>
#include <utility>
#include "boost/filesystem.hpp"

class NGin::ResourceManager {
public:
    
    ResourceManager();
    ResourceManager(std::string path);
    virtual ~ResourceManager();
    
    bool AddPath(std::string path);
    
    bool AddImage(std::string name, std::string path);
    NGin::Texture* GetTexture(std::string name);
    
    bool AddScene(std::string name, std::string path);
    NGin::Scene* GetScene(std::string name);
    
private:
    
    ResourceManager(const NGin::ResourceManager& orig);
    std::vector<NGin::Texture*> mTextures;
    std::vector<NGin::Scene*> mScenes;

};

