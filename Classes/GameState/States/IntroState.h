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

class IntroState : public iState {
public:
    IntroState();
    virtual ~IntroState();
    
    virtual void start(cocos2d::CCScene* scene);
    virtual void update(float dt);
    virtual void onEvent(CommonEnum::Event event);
};