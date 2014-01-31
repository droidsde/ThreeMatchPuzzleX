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

SplashState::SplashState(iFSM* machine)
: iState(machine, CommonEnum::eStateSplash)
{
}
SplashState::~SplashState() {
}

bool SplashState::isEnableTransitionAnotherState(CommonEnum::State state) {
    return true;
}
void SplashState::start(cocos2d::CCScene* scene) {
    SplashNode* node = SplashNode::create();
    gameNode->addChild(node);
    scene->addChild(gameNode);
}
void SplashState::update(float delta) {
}