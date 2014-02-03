//
//  FiniteStateMachine.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "cocos2d.h"
#include "CommonEnum.h"
#include "iFSM.h"

class iState;

class FiniteStateMachine : iFSM {
    friend class AppDelegate;
    friend class ThreeMatchPuzzleScene;

public:
    static FiniteStateMachine* getInstance();
    
    virtual void setState(CommonEnum::State targetState, bool dontRemoveCurrentState=false);
    virtual void update(float dt);
    
protected:
    iState* currentState;
    virtual iState* create(CommonEnum::State targetState, bool dontRemoveCurrentState=false);
    void start();
    void startWithState(CommonEnum::State state);
};