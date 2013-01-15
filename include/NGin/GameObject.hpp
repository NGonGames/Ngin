/* 
 * File:   GameObject.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 3:05 PM
 */

#pragma once

#include <vector>

#include "Animation.hpp"

namespace NGin {

    class GameLevel;

    class GameObject {
    public:
        GameObject(NGin::GameLevel* gameLevel);
        GameObject(const GameObject& orig);
        virtual ~GameObject();

        void Update();
        void Render();
    private:
        NGin::Graphics* gfx;
        NGin::GameLevel* gl;
        
        NGin::Vector2* mPos;
        NGin::Vector2* mVel;
        
        std::vector<NGin::Animation*> mAnims;
    };
};

