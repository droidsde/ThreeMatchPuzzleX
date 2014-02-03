//
//  TitleState.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "TitleState.h"
#include "TitleNode.h"

TitleState::TitleState(iFSM* fsm)
: iState(fsm, CommonEnum::eStateTitle)
{
}
TitleState::~TitleState() {
}

void TitleState::start(cocos2d::CCScene* scene) {
    // create node
    linkedNode = TitleNode::create();
    linkedNode->setLinkedState(this);
    linkedNode->retain();
    rootNode->addChild(linkedNode);
    scene->addChild(rootNode);
}
void TitleState::update(float dt) {
}
void TitleState::onEvent(CommonEnum::Event event) {
}
