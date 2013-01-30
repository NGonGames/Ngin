/* 
 * File:   Player.hpp
 * Author: Ben Cochrane
 *
 * Created on January 24, 2013, 12:16 PM
 */

#pragma once

namespace NGin {
    
    namespace Game {

        class Player : public Object {
        public:
            Player(Level *level, Math::Vector2 *position);
            virtual ~Player();
            
            virtual void Update();
            virtual void Render();
            virtual Mask* GetMask();
        private:
            Player(const Player& orig);
        };

    };

};