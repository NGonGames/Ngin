/* 
 * File:   Resource.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 1:10 PM
 */

#pragma once

#include "NGin/NGin.h"

class NGin::Resource {
public:
    Resource();
    virtual ~Resource();
private:
    Resource(const NGin::Resource& orig);
};

