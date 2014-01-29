//
//  SceneManager.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 23..
//
//

#include "SceneManager.h"
#include "SplashScene.h"
#include "TitleScene.h"
#include "HomeScene.h"
#include "GameScene.h"

USING_NS_CC;

SceneManager* pInstance = NULL;

SceneManager* SceneManager::getInstance() {
    if( pInstance==NULL ) {
        pInstance = SceneManager::create();
        pInstance->retain();
    }
    return pInstance;
}
SceneManager::SceneManager() {
}
SceneManager::~SceneManager() {
}
bool SceneManager::init() {
    return true;
}
void SceneManager::moveToScene(CommonEnum::SceneType sceneType,bool isReplace) {
    CCDirector* director = CCDirector::sharedDirector();
    CCScene* runningScene = director->getRunningScene();
    CCScene* newScene = getScene(sceneType);
    if( newScene==NULL )
        CCAssert(true, "The ""getScene"" method returned null instance.");
    
    if( runningScene==NULL ) {
        director->runWithScene(newScene);
    }
    else if( isReplace==false ) {
        director->pushScene(newScene);
    } else {
        director->replaceScene(newScene);
    }
    
}
CCScene* SceneManager::getScene(CommonEnum::SceneType sceneType) {
    switch (sceneType) {
        case CommonEnum::eSceneSplash:
            return SplashScene::scene();
        case CommonEnum::eSceneTitle:
            return TitleScene::scene();
        case CommonEnum::eSceneHome:
            return HomeScene::scene();
        case CommonEnum::eSceneGame:
            return GameScene::scene();
        default:
            CCAssert(true, "You must valid scene type.");
    }
    return NULL;
}
