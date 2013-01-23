/* 
 * File:   BitmapMask.hpp
 * Author: Ben Cochrane
 *
 * Created on January 21, 2013, 9:22 AM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {
    
    namespace Game {

        class BitmapMask : public Mask {
        public:
            BitmapMask(Object *obj);
            virtual ~BitmapMask();
            
            bool *bits;
            Math::Vector2* map;
            
        public:
            BitmapMask(const BitmapMask& orig);
        };

    };

};