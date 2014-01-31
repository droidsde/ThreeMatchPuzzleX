//
//  SplashState.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "SplashState.h"
#include "FiniteStateMachine.h"
#include "CommonEnum.h"

SplashState::SplashState(FiniteStateMachine* machine)
: iState(machine, CommonEnum::eStateSplash)
{
}
SplashState::~SplashState() {
}

bool SplashState::isEnableTransitionAnotherState(CommonEnum::State state) {
    return true;
}
void SplashState::Start() {
}
void SplashState::Start(cocos2d::CCScene* scene) {
}
void SplashState::Pause() {
}
void SplashState::Update(float delta) {
}