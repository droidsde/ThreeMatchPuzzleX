//
//  iState.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "iState.h"

USING_NS_CC;

iState::iState(FiniteStateMachine* fsm, CommonEnum::State state)
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
void iState::Start() {
}
void iState::Start(cocos2d::CCScene* scene) {
}
void iState::Pause() {
}
void iState::Update(float delta) {
}
