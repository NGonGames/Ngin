/* 
 * File:   TiledTile.hpp
 * Author: Ben Cochrane
 *
 * Created on January 15, 2013, 4:43 PM
 */

#pragma once

#include "NGin/NGin.hpp"
#include <string>

class NGin::TiledTile : public NGin::GameObject {
public:
    TiledTile(NGin::GameLevel *gl,  NGin::Vector2 *position, NGin::Vector2* clipPos, NGin::Vector2* clipSize);
    virtual ~TiledTile();
private:
    TiledTile(const NGin::TiledTile& orig);

};

