//
//  TitleNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "TitleNode.h"
#include "ProgressControl.h"

USING_NS_CC;

bool TitleNode::init() {
    if( !iNode::init() )
        return false;
    
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, 0, true);
    
    CCSize designResoulutionSize = CCEGLView::sharedOpenGLView()->getDesignResolutionSize();
    
    CCSize labelDimension = CCSizeMake(300, 200);
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create("Let's\nThree Match!", "Arial", 30, labelDimension, kCCTextAlignmentCenter);
    sceneDebugLabel->setAnchorPoint(ccp(0.5f, 1));
    sceneDebugLabel->setPosition(ccp(designResoulutionSize.width/2, designResoulutionSize.height/2+100));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    ProgressControl* progress = ProgressControl::create("UI/gauge_bg.png", "UI/gauge_content.png", NULL, CommonEnum::eProgressToRight);
    CCSize progressSize = progress->boundingBox().size;
    progress->setPosition(ccp((designResoulutionSize.width-progress->boundingBox().size.width)/2, 100));
    this->addChild(progress);
    
    return true;
}
void TitleNode::onExit() {
    CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
}
void TitleNode::onEvent(CommonEnum::Event event) {
}
bool TitleNode::ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
    return true;
}
void TitleNode::ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
}