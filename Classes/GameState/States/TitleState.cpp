//
//  TitleState.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "TitleState.h"

TitleState::TitleState(iFSM* fsm)
: iState(fsm, CommonEnum::eStateTitle)
{
}
TitleState::~TitleState() {
}

void TitleState::start(cocos2d::CCScene* scene) {
    // create node
}
void TitleState::update(float dt) {
}
void TitleState::onEvent(CommonEnum::Event event) {
}
