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
class iNode;

class iState : public cocos2d::CCObject {
protected:
    CommonEnum::State   const gameState = CommonEnum::eStateUnknown;
    cocos2d::CCNode*    const rootNode  = NULL;
    iFSM*               const gameFSM   = NULL;
    iNode* linkedNode                   = NULL;
    bool beUpdate                       = true;
    
    iState(iFSM* fsm, CommonEnum::State state);
    virtual ~iState();
    
    virtual void setState(CommonEnum::State state);
    virtual bool isEnableTransitionAnotherState(CommonEnum::State state);
    
public:
    virtual void start();
    virtual void start(cocos2d::CCScene* scene);
    virtual void pause();
    virtual void update(float dt);
};