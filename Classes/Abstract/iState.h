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

class FiniteStateMachine;

class iState : public cocos2d::CCObject {
    friend class FiniteStateMachine;
    
private:
    CommonEnum::State   const gameState     = CommonEnum::eStateUnknown;
    FiniteStateMachine* const gameFSM       = NULL;
    
protected:
    cocos2d::CCNode* const gameNode         = NULL;
    
    iState(FiniteStateMachine* fsm, CommonEnum::State state);
    virtual ~iState();
    
    virtual void setState(CommonEnum::State state);
    virtual bool isEnableTransitionAnotherState(CommonEnum::State state);
    
public:
    virtual void Start();
    virtual void Start(cocos2d::CCScene* scene);
    virtual void Pause();
    virtual void Update(float delta);
};


