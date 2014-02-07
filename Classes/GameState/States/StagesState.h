//
//  StagesState.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iState.h"

class CCScene;

class StagesState : public iState {
public:
    StagesState();
    virtual ~StagesState();
    
    virtual void start(CCScene* scene);
    virtual void onEvent(CommonEnum::Event event);
};