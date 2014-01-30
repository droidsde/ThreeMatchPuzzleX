//
//  GameIdleNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "GameIdleNode.h"

USING_NS_CC;

bool GameIdleNode::init() {
    if( !CCNode::init() )
        return false;
    
    CCSize size = CCEGLView::sharedOpenGLView()->getDesignResolutionSize();
    
    CCSprite* bg = CCSprite::create("UI/bg_sky.png");
    bg->setPosition(ccp(size.width/2, size.height/2));
    this->addChild(bg);
    
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create();
    sceneDebugLabel->setString("GameIdleNode");
    sceneDebugLabel->setPosition(ccp(100, 100));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    return true;
}