//
//  SplashState.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "SplashState.h"
#include "CommonEnum.h"
#include "SplashNode.h"
#include "cocos2d.h"
#include "FiniteStateMachine.h"

USING_NS_CC;

SplashState::SplashState()
: iState(CommonEnum::eStateSplash)
{
}
SplashState::~SplashState() {
}

void SplashState::start(cocos2d::CCScene* scene) {
    linkedNode = SplashNode::create();
    linkedNode->setLinkedState(this);
    linkedNode->retain();
    rootNode->addChild(linkedNode);
    scene->addChild(rootNode);
    
    linkedNode->onEvent(CommonEnum::eEventSplashFadein);
}
void SplashState::update(float dt) {
    if( beUpdate==false )
        return;
    
    if( currentShownTime>totalShownTime ) {
        linkedNode->onEvent(CommonEnum::eEventSplashFadeout);
        beUpdate = false;
    }
    else {
        currentShownTime+=dt;
    }
}
void SplashState::onEvent(CommonEnum::Event event) {
    if( event==CommonEnum::eEventSplashFadeoutFinished ) {
        FiniteStateMachine::getInstance()->setState(CommonEnum::eStateIntro);
    }
}