//
//  iState.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "iState.h"
#include "iFSM.h"

USING_NS_CC;

iState::iState(iFSM* fsm, CommonEnum::State state)
: gameFSM(fsm), gameState(state), gameNode(new CCNode())
{
}
iState::~iState() {
    gameNode->removeFromParentAndCleanup(true);
}
void iState::setState(CommonEnum::State state) {
}
bool iState::isEnableTransitionAnotherState(CommonEnum::State state) {
    return true;
}
void iState::start() {
}
void iState::start(cocos2d::CCScene* scene) {
}
void iState::pause() {
}
void iState::update(float delta) {
}
