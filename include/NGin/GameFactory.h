/* 
 * File:   GameFactory.h
 * Author: Ben Cochrane
 *
 * Created on January 9, 2013, 4:53 PM
 */

#ifndef NGINGAMEFACTORY_H
#define	NGINGAMEFACTORY_H

class NGin::GameFactory {
public:
    static NGin::Game* MakeGame();
    
private:
    GameFactory();
    GameFactory(const NGin::GameFactory& orig);
    virtual ~GameFactory();
};

#endif	/* NGINGAMEFACTORY_H */

