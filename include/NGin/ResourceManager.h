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
#include <map>
#include <utility>
#include "NGin.h"

class NGin::ResourceManager {
public:
    ResourceManager();
    virtual ~ResourceManager();
    
    bool addImage(std::string name, std::string path);
    SDL_Surface* getImage(std::string name);
    
    static NGin::ResourceManager* Get() { return m_resources; };
    
private:
    ResourceManager(const NGin::ResourceManager& orig);
    
    std::map<std::string, SDL_Surface*> m_images;

    
    static NGin::ResourceManager *m_resources;
};

#endif	/* NGINRESOURCEMANAGER_H */

