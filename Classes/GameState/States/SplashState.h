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
public:
    SplashState(iFSM* machine);
    virtual ~SplashState();
    
    virtual void start(cocos2d::CCScene* scene);
    virtual void update(float dt);
    
private:
    float const totalShownTime = 2.0f;
    float currentShownTime = 0.0f;
};