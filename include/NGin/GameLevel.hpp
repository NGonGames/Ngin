/* 
 * File:   GameLevel.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 2:10 PM
 */

#pragma once

#include "NGin/Graphics.hpp"
#include "NGin/GameObject.hpp"
#include <vector>

class NGin::GameLevel {
public:
    GameLevel(NGin::Graphics* graphics, NGin::Input* input, NGin::ResourceManager *resources, std::string level);
    GameLevel(const NGin::GameLevel& orig);
    virtual ~GameLevel();
    
    void Update();
    void Render();
    void Add(NGin::GameObject *g);
private:
    NGin::Scene* data;
    NGin::Graphics* gfx;
    NGin::Input* in;
	NGin::ResourceManager *rmgr;
    std::vector<NGin::GameObject*> gObjects;
    
    friend class NGin::GameObject;
    friend class NGin::TiledMap;
};

