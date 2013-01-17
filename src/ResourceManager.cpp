/* 
 * File:   ResourceManager.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 10:34 AM
 */

#include "NGin/NGin.hpp"
#include "rapidxml/rapidxml.hpp"

using namespace NGin;
namespace fs = boost::filesystem;

ResourceManager::ResourceManager() {
}

ResourceManager::ResourceManager(std::string path) {
	AddPath(path);
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
            printf("%s\n", fs::path(*dir).filename().string().c_str());
            if(fs::extension(dir->path().string()) == ".png") {
                AddImage(dir->path().stem().string(), dir->path().string());
            } else if (fs::extension(dir->path().string()) == ".tmx") {
                AddScene(dir->path().stem().string(), dir->path().string());
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
    mTextures.push_back(s);
    return true;
}

Texture* ResourceManager::GetTexture(std::string spriteName) {
    for (std::vector<Texture*>::const_iterator iterator = mTextures.begin(), end = mTextures.end(); iterator != end; ++iterator) {
        if (dynamic_cast<Texture*>(*iterator)->name() == spriteName) {
            return dynamic_cast<Texture*>(*iterator);
        }
    }
    return NULL;
}

bool ResourceManager::AddScene(std::string name, std::string path) {
    FILE* f = fopen(path.c_str(), "rb");
    if (!f) {
            printf("Error: unable to open file %s\n", path.c_str());
            return false;
    }
    fseek(f, 0, SEEK_END);
    int len = ftell(f);
    rewind(f);
    char* buf = new char[len + 1];
    fread(buf, 1, len, f);
    fclose(f);
    
    Scene *scene = new Scene(name, std::string(buf));
    mScenes.push_back(scene);
    return true;
}

Scene* ResourceManager::GetScene(std::string sceneName) {
    for (std::vector<Scene*>::const_iterator iterator = mScenes.begin(), end = mScenes.end(); iterator != end; ++iterator) {
        if (dynamic_cast<Scene*>(*iterator)->name() == sceneName) {
            return dynamic_cast<Scene*>(*iterator);
        }
    }
    return NULL;
}