//
//  SplashState.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iState.h"

class FiniteStateMachine;

class SplashState : public iState {
    friend class FiniteStateMachine;
    
private:
    SplashState(FiniteStateMachine* machine);
    virtual ~SplashState();
    virtual bool isEnableTransitionAnotherState(CommonEnum::State state);
    
public:
    virtual void Start(cocos2d::CCScene* scene);
    virtual void Pause();
    virtual void Update(float delta);
    
};