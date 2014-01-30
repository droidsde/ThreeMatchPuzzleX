//
//  ThreeMatchPuzzleScene.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "ThreeMatchPuzzleScene.h"
#include "ThreeMatchPuzzleMachine.h"

USING_NS_CC;

ThreeMatchPuzzleScene::ThreeMatchPuzzleScene() {
}
ThreeMatchPuzzleScene::~ThreeMatchPuzzleScene() {
}
CCScene* ThreeMatchPuzzleScene::scene() {
    CCScene* scene = CCScene::create();
    ThreeMatchPuzzleScene* layer = ThreeMatchPuzzleScene::create();
    scene->addChild(layer);
    return scene;
}
bool ThreeMatchPuzzleScene::init() {
    if( !CCLayer::init() )
        return false;
    
    scheduleUpdate();
    
    return true;
}
void ThreeMatchPuzzleScene::update(float dt) {
    ThreeMatchPuzzleMachine::getInstance()->update(dt);
}