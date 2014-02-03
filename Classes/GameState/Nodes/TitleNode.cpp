//
//  TitleNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "TitleNode.h"

USING_NS_CC;

bool TitleNode::init() {
    if( !iNode::init() )
        return false;
    
    CCTouchDispatcher* pDispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
    pDispatcher->addTargetedDelegate(this, 0, true);
    
    CCSize designResoulutionSize = CCEGLView::sharedOpenGLView()->getDesignResolutionSize();
    CCSize labelDimension = CCSizeMake(300, 200);
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create("Let's\nThree Match!", "Arial", 30, labelDimension, kCCTextAlignmentCenter);
    sceneDebugLabel->setAnchorPoint(ccp(0.5f, 1));
    sceneDebugLabel->setPosition(ccp(designResoulutionSize.width/2, designResoulutionSize.height/2+100));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    return true;
}
void TitleNode::onEvent(CommonEnum::Event event) {
}
bool TitleNode::ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
    return true;
}
void TitleNode::ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
}