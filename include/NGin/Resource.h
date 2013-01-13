/* 
 * File:   Resource.h
 * Author: Ben Cochrane
 *
 * Created on January 13, 2013, 1:10 PM
 */

#ifndef NGINRESOURCE_H
#define	NGINRESOURCE_H

#include "NGin/NGin.h"

class NGin::Resource {
public:
    Resource();
    virtual ~Resource();
private:
    Resource(const NGin::Resource& orig);
};

#endif	/* NGINRESOURCE_H */

