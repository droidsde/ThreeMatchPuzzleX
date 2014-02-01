//
//  TitleState.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iState.h"

class iFSM;

class TitleState : public iState {
public:
    TitleState(iFSM* fsm);
    virtual ~TitleState();
    
    virtual void start(cocos2d::CCScene* scene);
    virtual void update(float dt);
    virtual void onEvent(CommonEnum::Event event);
};