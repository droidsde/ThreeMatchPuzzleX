//
//  SplashNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "SplashNode.h"

USING_NS_CC;

bool SplashNode::init() {
    if( !CCNode::init() )
        return false;
    
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create();
    sceneDebugLabel->setString("SplashNode");
    sceneDebugLabel->setPosition(ccp(100, 100));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    return true;
}
