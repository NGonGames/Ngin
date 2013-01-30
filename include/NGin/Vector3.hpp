/* 
 * File:   Vector3.hpp
 * Author: Ben Cochrane
 *
 * Created on January 21, 2013, 11:09 AM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {

    namespace Math {
    
        class Vector3 {
        public:
            Vector3();
            Vector3(const Vector3 &orig);
            Vector3(int x, int y, int z);
            Vector3(float x, float y, float z);
            ~Vector3();
            Vector3 operator+(const Vector3 &param) const;
            Vector3 operator+=(const Vector3 &param);
            Vector3 operator*(const int &param) const;
            Vector3 operator*(const float &param) const;
            float operator*(const Vector3 &param) const;

            void normalize();
            Vector3 normalized();
            float magnitude();

            float x;
            float y;
            float z;
        };

    };

};