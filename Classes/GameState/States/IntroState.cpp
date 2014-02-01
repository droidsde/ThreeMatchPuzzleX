//
//  IntroState.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "IntroState.h"
#include "iFSM.h"
#include "IntroNode.h"

IntroState::IntroState(iFSM* fsm)
: iState(fsm, CommonEnum::eStateIntro)
{
}
IntroState::~IntroState() {
}

void IntroState::start(cocos2d::CCScene* scene) {
    linkedNode = IntroNode::create();
    linkedNode->setLinkedState(this);
    linkedNode->retain();
    rootNode->addChild(linkedNode);
    scene->addChild(rootNode);
}
void IntroState::update(float dt) {
}
void IntroState::onEvent(CommonEnum::Event event) {
    if( event==CommonEnum::eEventIntroEnded ) {
        gameFSM->setState(CommonEnum::eStateTitle);
    }
}
