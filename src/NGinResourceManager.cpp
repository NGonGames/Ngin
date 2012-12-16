/* 
 * File:   ResourceManager.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 10:34 AM
 */

#include "NGinResourceManager.h"

NGinResourceManager::NGinResourceManager() {
}

NGinResourceManager::NGinResourceManager(const NGinResourceManager& orig) {
}

NGinResourceManager::~NGinResourceManager() {
}

void NGinResourceManager::addImage(std::string name, std::string path) {
    SDL_Surface *img = NULL;
    img = IMG_Load(path.c_str());
    
    if (img != NULL) {
        img = SDL_DisplayFormat(img);
    }
    m_images[name] = img;
}

SDL_Surface* NGinResourceManager::getImage(std::string name) {
    return m_images[name];
}

void NGinResourceManager::linkNGinGraphics(NGinGraphics *graphics) {
    m_graphics = graphics;
}

void NGinResourceManager::linkNGinWindow(NGinWindow *window) {
    m_window = window;
}