//
//  SplashState.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iState.h"

class iFSM;

class SplashState : public iState {
    friend class FiniteStateMachine;
    
private:
    SplashState(iFSM* machine);
    virtual ~SplashState();
    virtual bool isEnableTransitionAnotherState(CommonEnum::State state);
    
public:
    virtual void start(cocos2d::CCScene* scene);
    virtual void update(float delta);
};