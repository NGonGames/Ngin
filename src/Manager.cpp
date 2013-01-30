/* 
 * File:   ResourceManager.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 10:34 AM
 */

#include "NGin/NGin.hpp"
#include "rapidxml/rapidxml.hpp"

using namespace NGin;
using namespace NGin::Resource;
using namespace std;
namespace fs = boost::filesystem;

Manager::Manager() {
}

Manager::Manager(string path) {
	AddPath(path);
}

Manager::Manager(const Manager& orig) {
}

Manager::~Manager() {
}

bool Manager::AddPath(string path) {
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

bool Manager::AddImage(string name, string path) {
    SDL_Surface *img = NULL;
    img = IMG_Load(path.c_str());
    
    if (img == NULL) {
        return false;
    }
    img = SDL_DisplayFormatAlpha(img);
    Texture* s = new Texture(name, img);
    mTextures.push_back(s);
    return true;
}

Texture* Manager::GetTexture(string spriteName) {
    for (auto tex : mTextures) {
        if (tex->name() == spriteName) {
            return (tex);
        }
    }
    return NULL;
}

bool Manager::AddScene(string name, string path) {
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
    
    Scene *scene = new Scene(name, string(buf));
    mScenes.push_back(scene);
    return true;
}

Scene* Manager::GetScene(string sceneName) {
    for (auto scene : mScenes) {
        if (scene->name() == sceneName) {
            return scene;
        }
    }
    return NULL;
}