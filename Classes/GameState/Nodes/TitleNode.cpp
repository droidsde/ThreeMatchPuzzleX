//
//  TitleNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "TitleNode.h"
#include "ProgressControl.h"
#include "FiniteStateMachine.h"

USING_NS_CC;

bool TitleNode::init() {
    if( !iNode::init() )
        return false;
    
    CCSize designResoulutionSize = CCEGLView::sharedOpenGLView()->getDesignResolutionSize();
    
    CCSize labelDimension = CCSizeMake(300, 200);
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create("Let's\nThree Match!", "Arial", 30, labelDimension, kCCTextAlignmentCenter);
    sceneDebugLabel->setAnchorPoint(ccp(0.5f, 1));
    sceneDebugLabel->setPosition(ccp(designResoulutionSize.width/2, designResoulutionSize.height/2+100));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    ProgressControl* progress = ProgressControl::create("UI/gauge_bg.png", "UI/gauge_content.png", NULL, this, callfuncO_selector(TitleNode::onProgressEnded), CommonEnum::eProgressToRight);
    progress->setPosition(ccp((designResoulutionSize.width-progress->boundingBox().size.width)/2, 100));
    progress->setValue(1.0f);
    this->addChild(progress);
    
    return true;
}
void TitleNode::onExit() {
    CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
}
void TitleNode::onEvent(CommonEnum::Event event) {
}
bool TitleNode::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent) {
    return true;
}
void TitleNode::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent) {
}
void TitleNode::onProgressEnded(CCObject* sender) {
    CCLog("TitleNode::onProgressEnded");
    
    CCNode* node = dynamic_cast<CCNode*>(sender);
    node->removeFromParentAndCleanup(true);
    
    CCSize designResoulutionSize = CCEGLView::sharedOpenGLView()->getDesignResolutionSize();
    
    CCLabelTTF* touchToStart = CCLabelTTF::create("Touch to Start!", "Arial", 15);
    touchToStart->setAnchorPoint(ccp(0.5f, 1));
    touchToStart->setPosition(ccp(designResoulutionSize.width/2, designResoulutionSize.height/2-100));
    touchToStart->setColor(ccRED);
    this->addChild(touchToStart);
    
    FiniteStateMachine::getInstance()->setState(CommonEnum::eStateStages);
    
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, 0, true);
}