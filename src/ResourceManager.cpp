/* 
 * File:   ResourceManager.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 10:34 AM
 */

#include "NGin/ResourceManager.hpp"

using namespace NGin;

ResourceManager::ResourceManager() {
	//TODO load all images in assets/
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
    Texture* s = new Texture(name, img);
    ResourceManager::mSprites.push_back(s);
    return true;
}

Texture* ResourceManager::GetImage(std::string spriteName) {
    for (std::vector<Texture*>::const_iterator iterator = ResourceManager::mSprites.begin(), end = ResourceManager::mSprites.end(); iterator != end; ++iterator) {
        if (dynamic_cast<Texture*>(*iterator)->name() == spriteName) {
            return dynamic_cast<Texture*>(*iterator);
        }
    }
    return NULL;
}