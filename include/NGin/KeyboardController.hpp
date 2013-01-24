/* 
 * File:   KeyboardController.hpp
 * Author: Ben Cochrane
 *
 * Created on January 24, 2013, 12:21 PM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {
    
    namespace Game {
    
    class KeyboardController : public Controller {
    public:
        KeyboardController();
        virtual ~KeyboardController();
    private:
        KeyboardController(const KeyboardController& orig);
    };

    };

};