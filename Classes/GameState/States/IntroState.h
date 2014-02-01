//
//  IntroState.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iState.h"
#include "CommonEnum.h"

class iFSM;

class IntroState : public iState {
public:
    IntroState(iFSM* fsm);
    virtual ~IntroState();
    
    virtual void start(cocos2d::CCScene* scene);
    virtual void update(float dt);
    virtual void onEvent(CommonEnum::Event event);
};