//
//  SplashScene.cpp
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#include "SplashScene.h"

USING_NS_CC;

SplashScene::SplashScene() {
    sceneName = "Splash Scene";
}
SplashScene::~SplashScene() {
}
bool SplashScene::init() {
    if( !iScene::init() )
        return false;
    return true;
}
CCScene* SplashScene::scene() {
    CCScene* scene = CCScene::create();
    CCLayer* layer = SplashScene::create();
    scene->addChild(layer);
    return scene;
}