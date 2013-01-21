/* 
 * File:   Rectangle.hpp
 * Author: Ben Cochrane
 *
 * Created on January 21, 2013, 1:04 PM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {

    namespace Math {
    
        class Rectangle {
        public:
            Rectangle();
            Rectangle(const Rectangle& orig);
            virtual ~Rectangle();
            
            Rectangle(float x, float y, float w, float h);
            Rectangle(int x, int y, int w, int h);
            
            float Area();
            
            float x;
            float y;
            float w;
            float h;
        };

    };

};