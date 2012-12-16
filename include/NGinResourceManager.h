/* 
 * File:   ResourceManager.h
 * Author: bcochrane
 *
 * Created on December 14, 2012, 10:34 AM
 */

#ifndef RESOURCEMANAGER_H
#define	RESOURCEMANAGER_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <string>
#include <map>
#include <utility>
#include "NGin.h"

class NGinResourceManager {
public:
    NGinResourceManager();
    NGinResourceManager(const NGinResourceManager& orig);
    virtual ~NGinResourceManager();
    
    void addImage(std::string name, std::string path);
    SDL_Surface* getImage(std::string name);
    
    void linkNGinWindow(NGinWindow *window);
    void linkNGinGraphics(NGinGraphics *graphics);
private:
    std::map<std::string, SDL_Surface*> m_images;
    NGinWindow *m_window;
    NGinGraphics *m_graphics;
};

#endif	/* RESOURCEMANAGER_H */

