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
    CREATE_FUNC(SplashNode);
    
    void onEvent(CommonEnum::Event event);
    
private:
    void onEventFadeIn();
    void onEventFadeOut();
};
