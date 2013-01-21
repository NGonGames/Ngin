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
        Application(RenderContext *graphics,
                    Resource::Manager *resources,
                    Window *window,
                    Input *input);

        virtual ~Application();

        int Execute();
        void Init();
        void Update();
        void Render();
        void Quit();

        void AddLevel(Game::Level*);
    private:
        Application(const Application& orig);

    protected:
        Game::Level* GetActiveLevel();

        RenderContext* mRender;
        Window* mWindow;
        Resource::Manager* mResource;
        Input* mInput;
        
        bool running;

        std::vector<Game::Level*> mAllLevels;
        std::stack<Game::Level*> mLoadedLevels;
        
        float x;
    };

};