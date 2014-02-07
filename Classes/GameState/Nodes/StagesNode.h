//
//  StagesNode.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iNode.h"

class StagesNode : public iNode {
public:
    virtual bool init();
    virtual void onEvent(CommonEnum::Event event);
    CREATE_FUNC(StagesNode);
};

//#include "cocos2d.h"

//class SplashNode : public iNode {
//public:
//    virtual bool init();
//    virtual void onEvent(CommonEnum::Event event);
//    CREATE_FUNC(SplashNode);
//    
//private:
//    void onEventFadeIn();
//    void onEventFadeOut();
//    void onEndFadeOut();
//};

