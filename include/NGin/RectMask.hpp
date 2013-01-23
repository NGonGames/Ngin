/* 
 * File:   RectMask.hpp
 * Author: Ben Cochrane
 *
 * Created on January 22, 2013, 9:08 AM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {
    
    namespace Game {

        class RectMask : public Mask {
        public:
            RectMask();
            RectMask(const RectMask& orig);
            virtual ~RectMask();
            
            virtual bool Collides(const Mask &m) = 0;
        private:
            virtual bool CollidesRectMask(const RectMask &m);
            virtual bool CollidesBitmapMask(const BitmapMask &m);
            virtual bool CollidesPolyMask(const PolyMask &m);
            Math::Rectangle mRect;
        };
    
    };

};