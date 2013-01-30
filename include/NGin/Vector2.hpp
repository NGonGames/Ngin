/* 
 * File:   Vector2.hpp
 * Author: Ben Cochrane
 *
 * Created on January 14, 2013, 2:33 PM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {

    namespace Math {
    
        class Vector2 {
        public:
            Vector2();
            Vector2(const Vector2& orig);
            Vector2(int xval, int yval);
            Vector2(float xval, float yval);
            ~Vector2();
            Vector2 operator+(const Vector2& param) const;
            Vector2 operator+=(const Vector2& param);
            Vector2 operator*(const int param) const;
            Vector2 operator*(const float param) const;
            float operator*(const Vector2& param) const;

            void normalize();
            Vector2 normalized();
            float magnitude();

            float x;
            float y;
        };

    };

};