//
//  GameScene.cpp
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#include "GameScene.h"
#include "CommonValue.h"
#include "GamePlayManager.h"

USING_NS_CC;

GameScene::GameScene() {
//    sceneName = "Game Scene";
    sceneName = CommonValue::getVersionString();
}
GameScene::~GameScene() {
}
bool GameScene::init() {
    if( !iScene::init() )
        return false;
    
    GamePlayManager* gamePlayManager = GamePlayManager::getInstance();
    
    return true;
}
CCScene* GameScene::scene() {
    CCScene* scene = CCScene::create();
    CCLayer* layer = GameScene::create();
    scene->addChild(layer);
    return scene;
}

