/* 
 * File:   GameObject.hpp
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 3:05 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <vector>

class NGin::GameObject {
public:
    GameObject(NGin::GameLevel* gameLevel);
    virtual ~GameObject();

    virtual void Update();
    virtual void Render();
    
    void UpdateAnimation();
    void RenderAnimation();
private:
    GameObject(const NGin::GameObject& orig);
protected:
    NGin::Graphics* gfx;
    NGin::GameLevel* gl;
    NGin::Input* in;
    NGin::Vector2* mPos;
    NGin::Vector2* mVel;

    std::vector<NGin::Animation*> mAnims;
};

