/* 
 * File:   ResourceManager.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 10:34 AM
 */

#include "NGin/ResourceManager.h"

using namespace NGin;

ResourceManager::ResourceManager() {
    ResourceManager::m_resources = this;
}

ResourceManager::ResourceManager(const ResourceManager& orig) {
}

ResourceManager::~ResourceManager() {
}

void ResourceManager::addImage(std::string name, std::string path) {
    SDL_Surface *img = NULL;
    img = IMG_Load(path.c_str());
    
    if (img != NULL) {
        img = SDL_DisplayFormat(img);
    }
    m_images[name] = img;
}

SDL_Surface* ResourceManager::getImage(std::string name) {
    return m_images[name];
}