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
            PolyMask(Object *obj);
            virtual ~PolyMask();
        private:
            PolyMask(const PolyMask& orig);
        };
    
    };

};