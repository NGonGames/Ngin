/* 
 * File:   ResourceManager.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 10:34 AM
 */

#include "NGin/ResourceManager.h"

using namespace NGin;

NGin::ResourceManager *NGin::ResourceManager::mResources = 0;

ResourceManager::ResourceManager() {
    ResourceManager::mResources = this;
}

ResourceManager::ResourceManager(const ResourceManager& orig) {
}

ResourceManager::~ResourceManager() {
}

bool ResourceManager::addImage(std::string name, std::string path) {
    SDL_Surface *img = NULL;
    img = IMG_Load(path.c_str());
    
    if (img == NULL) {
        return false;
    }
    img = SDL_DisplayFormat(img);
    //mSprites[name] = img;
    return true;
}

SDL_Surface* ResourceManager::getImage(std::string name) {
    return new SDL_Surface;//mSprites[name];
}