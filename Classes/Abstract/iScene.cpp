//
//  iScenes.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 23..
//
//

#include "iScene.h"

USING_NS_CC;

iScene::iScene() {
}
iScene::~iScene() {
}
bool iScene::init() {
    if( !CCLayer::init() )
        return false;
    
    if( sceneName!=NULL ) {
        CCLabelTTF* sceneDebugLabel = CCLabelTTF::create();
        sceneDebugLabel->setString(sceneName);
        sceneDebugLabel->setPosition(ccp(100, 100));
        this->addChild(sceneDebugLabel);
    }
    
    return true;
}