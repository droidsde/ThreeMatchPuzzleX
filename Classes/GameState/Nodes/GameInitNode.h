//
//  GameInitNode.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once 

#include <iostream>
#include "cocos2d.h"

class GameInitNode : public cocos2d::CCNode {
private:
    virtual bool init();
    
public:
    CREATE_FUNC(GameInitNode);
};
