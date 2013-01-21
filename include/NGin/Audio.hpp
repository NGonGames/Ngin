/* 
 * File:   Audio.hpp
 * Author: Ben Cochrane
 *
 * Created on January 20, 2013, 9:07 PM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {
    //namespace Resource {
        
        class Audio : public Resource {
        public:
            Audio();
            Audio(const Audio& orig);
            virtual ~Audio();
        private:

        };
    //}
}