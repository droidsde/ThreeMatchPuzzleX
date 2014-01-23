//
//  TitleScene.cpp
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#include "TitleScene.h"

USING_NS_CC;

TitleScene::TitleScene() {
}
TitleScene::~TitleScene() {
}

bool TitleScene::init() {
    if( !iScene::init() )
        return false;
    return true;
}
CCScene* TitleScene::scene() {
    CCScene* scene = CCScene::create();
    CCLayer* layer = TitleScene::create();
    scene->addChild(layer);
    return scene;
}
