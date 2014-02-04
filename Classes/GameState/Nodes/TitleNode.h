//
//  TitleNode.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iNode.h"
#include "CommonEnum.h"

class TitleNode : public iNode, public cocos2d::CCTouchDelegate {
public:
    virtual bool init();
    virtual void onExit();
    
    virtual void onEvent(CommonEnum::Event event);
    CREATE_FUNC(TitleNode);
    
    virtual bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
};