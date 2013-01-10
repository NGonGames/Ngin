/* 
 * File:   ResourceManager.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 10:34 AM
 */

#include "NGin/ResourceManager.h"

using namespace NGin;

ResourceManager::ResourceManager() {
}

ResourceManager::ResourceManager(const ResourceManager& orig) {
}

ResourceManager::~ResourceManager() {
}

bool ResourceManager::AddImage(std::string name, std::string path) {
    SDL_Surface *img = NULL;
    img = IMG_Load(path.c_str());
    
    if (img == NULL) {
        return false;
    }
    img = SDL_DisplayFormat(img);
    Sprite* s = new Sprite(name, img);
    ResourceManager::mSprites.push_back(s);
    return true;
}

SDL_Surface* ResourceManager::GetImage(std::string spriteName) {
    for (std::vector<Sprite*>::const_iterator iterator = ResourceManager::mSprites.begin(), end = ResourceManager::mSprites.end(); iterator != end; ++iterator) {
        if (dynamic_cast<Sprite*>(*iterator)->name() == spriteName) {
            return dynamic_cast<Sprite*>(*iterator)->surface();
        }
    }
    return NULL;
}