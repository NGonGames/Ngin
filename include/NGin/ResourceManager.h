/* 
 * File:   ResourceManager.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 10:34 AM
 */

#ifndef NGINRESOURCEMANAGER_H
#define	NGINRESOURCEMANAGER_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <string>
#include <vector>
#include <utility>
#include "NGin.h"

class NGin::ResourceManager {
public:
    
    ResourceManager();
    virtual ~ResourceManager();
    
    bool AddImage(std::string name, std::string path);
    SDL_Surface* GetImage(std::string name);
    
private:
    
    ResourceManager(const NGin::ResourceManager& orig);
    std::vector<NGin::Sprite*> mSprites;

};

#endif	/* NGINRESOURCEMANAGER_H */

