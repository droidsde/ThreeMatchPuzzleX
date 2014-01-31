//
//  IntroState.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iState.h"

class iFSM;

class IntroState : public iState {
public:
    IntroState(iFSM* machine);
    virtual ~IntroState();
    
    virtual void start(cocos2d::CCScene* scene);
    virtual void update(float dt);
};