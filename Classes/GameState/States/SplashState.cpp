//
//  SplashState.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "SplashState.h"
#include "iFSM.h"
#include "CommonEnum.h"
#include "SplashNode.h"
#include "cocos2d.h"

USING_NS_CC;

SplashState::SplashState(iFSM* machine)
: iState(machine, CommonEnum::eStateSplash)
{
}
SplashState::~SplashState() {
}

void SplashState::start(cocos2d::CCScene* scene) {
    linkedNode = SplashNode::create();
    linkedNode->retain();
    rootNode->addChild(linkedNode);
    scene->addChild(rootNode);
}
void SplashState::update(float dt) {
    if( beUpdate==false )
        return;
    
    if( currentShownTime>totalShownTime ) {
        CCLOG("Splash 이미지를 Fadeout 하도록 합니다.");
        linkedNode->onEvent(CommonEnum::eEventSplashFadeout);
        beUpdate = false;
    }
    else {
        currentShownTime+=dt;
    }
}