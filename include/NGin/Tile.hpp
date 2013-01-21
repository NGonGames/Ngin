/* 
 * File:   TiledTile.hpp
 * Author: Ben Cochrane
 *
 * Created on January 15, 2013, 4:43 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <string>

namespace NGin {
    
    namespace Game {

        class Tile : public Object {
        public:
            Tile(Level *gl, Resource::Texture* tex, Vector2 *position, Vector2* clipPos, Vector2* clipSize);
            virtual ~Tile();
            virtual void Update();
            virtual void Render();
        private:
            Tile(const Tile& orig);

        };
    
    };

};