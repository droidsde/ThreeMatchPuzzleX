//
//  HomeScene.cpp
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#include "HomeScene.h"

USING_NS_CC;

HomeScene::HomeScene() {
    sceneName = "Home Scene";
}
HomeScene::~HomeScene() {
}
bool HomeScene::init() {
    if( !iScene::init() )
        return false;
    return true;
}
CCScene* HomeScene::scene() {
    CCScene* scene = CCScene::create();
    CCLayer* layer = HomeScene::create();
    scene->addChild(layer);
    return scene;
}

