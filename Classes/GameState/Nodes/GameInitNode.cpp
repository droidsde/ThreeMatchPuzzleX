//
//  GameInitNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "GameInitNode.h"

USING_NS_CC;

bool GameInitNode::init() {
    if( !CCNode::init() ) {
        return false;
    }
    
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create();
    sceneDebugLabel->setString("GameInitNode");
    sceneDebugLabel->setPosition(ccp(100, 100));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    return true;
}