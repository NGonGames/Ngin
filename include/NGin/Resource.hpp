/* 
 * File:   Resource.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 1:10 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <string>

namespace NGin {

    class Resource {
    public:
        Resource();
        virtual ~Resource();
        std::string name() { return mName; };
    protected:
        std::string mName;
    private:
        Resource(const Resource& orig);
    };

};