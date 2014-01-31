//
//  IntroState.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "IntroState.h"
#include "iFSM.h"

IntroState::IntroState(iFSM* machine)
: iState(machine, CommonEnum::eStateIntro)
{
}
IntroState::~IntroState() {
}

void IntroState::start(cocos2d::CCScene* scene) {
    // create node
}
void IntroState::update(float dt) {
}
