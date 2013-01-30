/* 
 * File:   TiledMap.hpp
 * Author: Ben Cochrane
 *
 * Created on January 15, 2013, 4:30 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <vector>

namespace NGin {
    
    namespace Game {

        class TileMap : public Object {
        public:
            TileMap(Level* gameLevel);
            virtual ~TileMap();
            
            virtual void Update();
            virtual void Render();
            
            virtual Mask* GetMask();
        private:
            TileMap(const TileMap& orig);
            std::string TrimFileName(std::string path);
            std::vector<std::vector<Tile*>*> mLayers;
        };

    };

};