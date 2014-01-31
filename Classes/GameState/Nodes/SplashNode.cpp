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
    if( !iNode::init() )
        return false;
    
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create();
    sceneDebugLabel->setString("SplashNode");
    sceneDebugLabel->setPosition(ccp(100, 100));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    return true;
}

void SplashNode::onEvent(CommonEnum::Event event) {
    if( event==CommonEnum::eEventSplashFadein ) {
        onEventFadeIn();
    }
    else if( event==CommonEnum::eEventSplashFadein ) {
        onEventFadeOut();
    }
}
void SplashNode::onEventFadeIn() {
    CCLOG("Called SplashNode::onEventFadeIn method.");
}
void SplashNode::onEventFadeOut() {
    CCLOG("Called SplashNode::onEventFadeOut method.");
}