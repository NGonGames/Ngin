/* 
 * File:   GameLevel.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 2:10 PM
 */

#pragma once

#include "NGin/Graphics.hpp"
#include "NGin/Object.hpp"
#include <vector>

namespace NGin {
    
    namespace Game {

        class Level {
        public:
            Level(Graphics* graphics, Input* input, Resource::Manager *resources, std::string level);
            Level(const Level& orig);
            virtual ~Level();

            void Update();
            void Render();
            void Add(Object *g);
        private:
            Resource::Scene* data;
            Graphics* gfx;
            Input* in;
            Resource::Manager *rmgr;
            std::vector<Object*> gObjects;

            friend class Object;
            friend class TileMap;
        };

    };

};