//
//  iNode.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once 

#include "cocos2d.h"
#include "CommonEnum.h"

class iNode : public cocos2d::CCNode {
protected:
    bool isOveray = false;
    
public:
    virtual void onEvent(CommonEnum::Event event) = 0;
};