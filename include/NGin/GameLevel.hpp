/* 
 * File:   GameLevel.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 2:10 PM
 */

#pragma once

#include "NGin/NGin.hpp"

class NGin::GameLevel {
public:
    GameLevel(NGin::Graphics* graphics);
    GameLevel(const NGin::GameLevel& orig);
    virtual ~GameLevel();
    
    void Update();
    void Render();
private:
    
    NGin::Graphics* gfx;
    std::vector<NGin::GameObject*> gObjects;
    
    float x, y, xs, ys;
};

