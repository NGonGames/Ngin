/* 
 * File:   GameObject.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 3:05 PM
 */

#pragma once

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
        NGin::Input* in;
        float x, y, xspeed, yspeed;
    };
};

