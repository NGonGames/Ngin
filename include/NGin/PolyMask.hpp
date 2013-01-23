/* 
 * File:   PolyMask.hpp
 * Author: Ben Cochrane
 *
 * Created on January 21, 2013, 8:59 AM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {
    
    namespace Game {

        class PolyMask : public Mask {
        public:
            PolyMask();
            PolyMask(const PolyMask& orig);
            virtual ~PolyMask();
            
            virtual bool Collides(const Mask &m) = 0;
        private:
            virtual bool CollidesRectMask(const RectMask &m);
            virtual bool CollidesBitmapMask(const BitmapMask &m);
            virtual bool CollidesPolyMask(const PolyMask &m);
        };
    
    };

};