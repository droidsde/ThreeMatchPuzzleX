//
//  iFSM.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 31..
//
//

#pragma once

#include "cocos2d.h"
#include "CommonEnum.h"

class iState;

class iFSM : public cocos2d::CCObject {
    
public:
    virtual void setState(CommonEnum::State targetState, bool dontRemoveCurrentState=false) = 0;
    virtual void update(float dt) = 0;
    
protected:
    virtual iState* create(CommonEnum::State targetState, bool dontRemoveCurrentState=false) = 0;
    virtual void start() = 0;
};

