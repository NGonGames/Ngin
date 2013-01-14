/* 
 * File:   Scene.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 10:44 PM
 */

#pragma once

#include "NGin/NGin.h"

class NGin::Scene : public NGin::Resource {
public:
    Scene();
    virtual ~Scene();
private:
    Scene(const NGin::Scene& orig);
};

