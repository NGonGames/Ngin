/* 
 * File:   GameFactory.h
 * Author: bcochrane
 *
 * Created on January 9, 2013, 4:53 PM
 */

#ifndef NGINGAMEFACTORY_H
#define	NGINGAMEFACTORY_H

class NGin::GameFactory {
public:
    GameFactory();
    GameFactory(const NGin::GameFactory& orig);
    virtual ~GameFactory();
    
    void MakeGame();
    void MakeGameForMe();
private:

};

#endif	/* NGINGAMEFACTORY_H */

