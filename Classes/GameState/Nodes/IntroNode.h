//
//  IntroNode.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include <stdio.h>
#include "iNode.h"
#include "CommonEnum.h"

struct IntroData {
    const char* introFileName;
    const char* introString;
};

class IntroNode : public iNode, public cocos2d::CCTouchDelegate {
private:
    std::vector<IntroData>* introDataVector = NULL;
    
    void showIntro();
    
public:
    virtual bool init();
    virtual void onExit();
    
    virtual void onEvent(CommonEnum::Event event);
    CREATE_FUNC(IntroNode);
    
    virtual bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
};