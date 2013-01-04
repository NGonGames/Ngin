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
    Sprite* s = new Sprite(name, img);
    mSprites.push_back(s);
    return true;
}

SDL_Surface* ResourceManager::getImage(std::string spriteName) {
    for (std::vector<Sprite*>::const_iterator iterator = mSprites.begin(), end = mSprites.end(); iterator != end; ++iterator) {
        if (dynamic_cast<Sprite*>(*iterator)->name() == spriteName) {
            return dynamic_cast<Sprite*>(*iterator)->surface();
        }
    }
    return NULL;
}