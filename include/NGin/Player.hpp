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
            Player(Level *level);
            virtual ~Player();
        private:
            Player(const Player& orig);
        };

    };

};