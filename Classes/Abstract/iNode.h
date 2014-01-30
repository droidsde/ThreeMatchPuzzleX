//
//  iNode.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once 

#include "cocos2d.h"

class iNode : cocos2d::CCNode {
protected:
    bool isOveray = false;
    
    virtual bool init();
};