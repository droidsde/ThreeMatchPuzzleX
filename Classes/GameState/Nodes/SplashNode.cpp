//
//  SplashNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "SplashNode.h"
#include "FiniteStateMachine.h"

USING_NS_CC;

enum SplashNodeTag {
    DebugLabelTag = 101,
};

bool SplashNode::init() {
    if( !iNode::init() )
        return false;
    
    return true;
}

void SplashNode::onEvent(CommonEnum::Event event) {
    if( event==CommonEnum::eEventSplashFadein ) {
        onEventFadeIn();
    }
    else if( event==CommonEnum::eEventSplashFadeout ) {
        onEventFadeOut();
    }
}
void SplashNode::onEventFadeIn() {
    CCLOG("Called SplashNode::onEventFadeIn method.");
    
    CCSize designResoulutionSize = CCEGLView::sharedOpenGLView()->getDesignResolutionSize();
    
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create();
    sceneDebugLabel->setString("Please change to BI Splash Sprite.");
    sceneDebugLabel->setTag(DebugLabelTag);
    sceneDebugLabel->setOpacity(0.0f);
    sceneDebugLabel->setPosition(ccp(designResoulutionSize.width/2, designResoulutionSize.height/2));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    CCFadeIn* fadein = CCFadeIn::create(1.0f);
    sceneDebugLabel->runAction(fadein);
}
void SplashNode::onEventFadeOut() {
    CCLOG("Called SplashNode::onEventFadeOut method.");
    
    CCLabelTTF* sceneDebugLabel = (CCLabelTTF*)this->getChildByTag(DebugLabelTag);
    CCFadeOut* fadeout = CCFadeOut::create(1.0f);
    CCSequence* sequence = CCSequence::create(fadeout, CCCallFunc::create(this, callfunc_selector(SplashNode::onEndFadeOut)));
    sceneDebugLabel->runAction(sequence);
}
void SplashNode::onEndFadeOut() {
    CCLOG("Ended BI Fadeout processing. Please changed to Another State.");
    // Do you thingk correctly?
    // State to Node로 onEvent method를 호출하여 You can process with event.
    // 하지만, But, Node to State로 이벤트를 전달할 수 있는 방법은 아직 없습니다. fade out이 발생 했을 때 "iFSM의 setState" 메소드를 호출하여 State를 전이하여야 합니다.
    //FiniteStateMachine::getInstance()->setState(CommonEnum::eStateIntro);
}
