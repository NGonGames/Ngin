/* 
 * File:   Game.h
 * Author: Ben
 *
 * Created on January 10, 2013, 11:09 AM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <vector>
#include <stack>

class NGin::Game {
public:
    Game(NGin::Graphics *graphics,
         NGin::ResourceManager *resources,
         NGin::Window *window);
    
    virtual ~Game();
    
    void Init();
    void Update();
    void Render();
    
    void AddLevel(NGin::GameLevel*);
private:
    Game(const NGin::Game& orig);
    
protected:
    NGin::GameLevel* GetActiveLevel();
    
    NGin::Graphics* gfx;
    NGin::Window* wind;
    NGin::ResourceManager* rmgr;
    
    std::vector<NGin::GameLevel*> mAllLevels;
    std::stack<NGin::GameLevel*> mLoadedLevels;
};

