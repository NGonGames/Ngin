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
            Mask(Object *object);
            Mask(const Mask& orig);
            virtual ~Mask();
            
            bool Collides(const Mask &m);
        protected:
            bool RectVsRect(const RectMask &m);
            bool RectVsBitmap(const BitmapMask &m);
            bool RectVsPoly(const PolyMask &m);
            
            bool BitmapVsBitmap(const BitmapMask &m);
            bool BitmapVsPoly(const PolyMask &m);
            
            bool PolyVsPoly(const PolyMask &m);
            
            Object *mObj;
        private:

        };

    };

};