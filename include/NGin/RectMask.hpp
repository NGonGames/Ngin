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
            RectMask(Object *obj);
            virtual ~RectMask();
            
            Math::Rectangle mRect;
        private:
            RectMask(const RectMask& orig);
        };
    
    };

};