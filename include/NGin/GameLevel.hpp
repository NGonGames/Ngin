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
    GameLevel(NGin::Graphics* graphics, NGin::Scene *scene);
    GameLevel(const NGin::GameLevel& orig);
    virtual ~GameLevel();
    
    void Update();
    void Render();
    void Add(NGin::GameObject *g);
private:
    NGin::Scene* data;
    NGin::Graphics* gfx;
    std::vector<NGin::GameObject*> gObjects;
    
    friend class NGin::GameObject;
};

