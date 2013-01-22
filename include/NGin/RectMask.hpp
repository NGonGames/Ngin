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
        private:
            Math::Rectangle mRect;
        };
    
    };

};