/* 
 * File:   Mask.hpp
 * Author: Ben Cochrane
 *
 * Created on January 21, 2013, 8:56 AM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {

    namespace Game {
        
        class Mask {
        public:
            Mask();
            Mask(const Mask& orig);
            virtual ~Mask();
            
            virtual bool Collides(const Mask &m) = 0;
        protected:
            virtual bool CollidesRectMask(const RectMask &m) = 0;
            virtual bool CollidesBitmapMask(const BitmapMask &m) = 0;
            virtual bool CollidesPolyMask(const PolyMask &m) = 0;
        private:

        };

    };

};