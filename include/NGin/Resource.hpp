/* 
 * File:   Resource.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 1:10 PM
 */

#pragma once

#include "NGin/NGin.hpp"

class NGin::Resource {
public:
    Resource();
    virtual ~Resource();
	Texture* text;
private:
    Resource(const NGin::Resource& orig);
};

