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
#include "iEventHandler.h"

class iState;

class iNode : public cocos2d::CCNode, public iEventHandler {
protected:
    iState* linkedState = NULL;
    
public:
    // this code is terrible code. Because, it is happend many mistake.
    void setLinkedState(iState* state) { linkedState = state; }
};