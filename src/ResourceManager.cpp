/* 
 * File:   ResourceManager.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 10:34 AM
 */

#include "NGin/ResourceManager.hpp"

using namespace NGin;

ResourceManager::ResourceManager() {
	//Use the default path assets/
}

ResourceManager::ResourceManager(std::string path) {
	
}

ResourceManager::ResourceManager(const ResourceManager& orig) {
}

ResourceManager::~ResourceManager() {
}

bool ResourceManager::AddPath(std::string path) {
	if(!fs::is_directory(path)) {
		return false;
	}
	for ( fs::recursive_directory_iterator end, dir(path); dir != end; ++dir ) {

		if(fs::is_regular_file(dir->path())) {
			if(fs::extension(dir->path().string()) == ".png")
			{				
				std::cout << fs::path(*dir).filename().string() << std::endl;   
				AddImage(dir->path().stem().string(), dir->path().string());
			}
		}                                 
	}
	return true;
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