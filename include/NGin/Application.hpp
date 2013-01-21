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

namespace NGin {

    class Application {
    public:
        Application(Graphics *graphics,
                    Resource::Manager *resources,
                    Window *window,
                    Input *input);

        virtual ~Application();

        void Init();
        void Update();
        void Render();

        void AddLevel(Game::Level*);
    private:
        Application(const Application& orig);

    protected:
        Game::Level* GetActiveLevel();

        Graphics* gfx;
        Window* wind;
        Resource::Manager* rmgr;
        Input* in;


        std::vector<Game::Level*> mAllLevels;
        std::stack<Game::Level*> mLoadedLevels;
    };

};