//
//  iState.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "cocos2d.h"
#include "CommonEnum.h"

class iFSM;

class iState : public cocos2d::CCObject {
private:
    CommonEnum::State   const gameState     = CommonEnum::eStateUnknown;
    iFSM*               const gameFSM       = NULL;
    
protected:
    cocos2d::CCNode* const gameNode         = NULL;
    
    iState(iFSM* fsm, CommonEnum::State state);
    virtual ~iState();
    
    virtual void setState(CommonEnum::State state);
    virtual bool isEnableTransitionAnotherState(CommonEnum::State state);
    
public:
    virtual void start();
    virtual void start(cocos2d::CCScene* scene);
    virtual void pause();
    virtual void update(float delta);
};


