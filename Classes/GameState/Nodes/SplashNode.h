//
//  SplashNode.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//


#include "iNode.h"
#include "cocos2d.h"

class SplashNode : public iNode {
public:
    virtual bool init();
    virtual void onEvent(CommonEnum::Event event);
    CREATE_FUNC(SplashNode);
    
private:
    void onEventFadeIn();
    void onEventFadeOut();
    void onEndFadeOut();
};
