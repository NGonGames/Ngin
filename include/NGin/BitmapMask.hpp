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
            BitmapMask();
            BitmapMask(const BitmapMask& orig);
            virtual ~BitmapMask();
            
            virtual bool Collides(const Mask &m) = 0;
        private:
            virtual bool CollidesRectMask(const RectMask &m);
            virtual bool CollidesBitmapMask(const BitmapMask &m);
            virtual bool CollidesPolyMask(const PolyMask &m);

        };

    };

};