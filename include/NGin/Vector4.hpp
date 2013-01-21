/* 
 * File:   Vector4.hpp
 * Author: Ben Cochrane
 *
 * Created on January 21, 2013, 12:28 PM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {

    namespace Math {
    
        class Vector4 {
        public:
            Vector4();
            Vector4(const Vector4 &orig);
            Vector4(int w, int x, int y, int z);
            Vector4(float w, float x, float y, float z);
            ~Vector4();
            Vector4 operator+(const Vector4 &param) const;
            Vector4 operator+=(const Vector4 &param);
            Vector4 operator*(const int &param) const;
            Vector4 operator*(const float &param) const;
            float operator*(const Vector4 &param) const;

            void normalize();
            Vector4 normalized();
            float magnitude();

            float w;
            float x;
            float y;
            float z;
        };

    };

};