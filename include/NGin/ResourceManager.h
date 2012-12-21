/* 
 * File:   ResourceManager.h
 * Author: bcochrane
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
    
    bool addImage(std::string name, std::string path);
    SDL_Surface* getImage(std::string name);
    
    static NGin::ResourceManager* Get() { return mResources; };
    
private:
    ResourceManager(const NGin::ResourceManager& orig);
    
    //std::map<std::string, SDL_Surface*> m_images;
    std::vector<NGin::Sprite> mSprites;

    static NGin::ResourceManager *mResources;
};

#endif	/* NGINRESOURCEMANAGER_H */

