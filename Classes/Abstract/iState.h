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
#include "iEventHandler.h"

class iNode;

class iState : public cocos2d::CCObject, public iEventHandler {
protected:
    CommonEnum::State   const gameState = CommonEnum::eStateUnknown;
    cocos2d::CCNode*    const rootNode  = NULL;
    iNode* linkedNode                   = NULL;
    bool beUpdate                       = true;
    
    iState(CommonEnum::State state);
    virtual ~iState();
    
    virtual void setState(CommonEnum::State state);
    virtual bool isEnableTransitionAnotherState(CommonEnum::State state);
    
public:
    virtual void start();
    virtual void start(cocos2d::CCScene* scene);
    virtual void pause();
    virtual void update(float dt);
};