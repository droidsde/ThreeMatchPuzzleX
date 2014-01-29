//
//  GamePlayManager.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 24..
//
//

#include "GamePlayManager.h"

static GamePlayManager* pInstance = NULL;

GamePlayManager* GamePlayManager::getInstance() {
    if( pInstance==NULL ) {
        pInstance = GamePlayManager::create();
        pInstance->retain();
    }
    
    return pInstance;
}
GamePlayManager::GamePlayManager() {
}
GamePlayManager::~GamePlayManager() {
}
bool GamePlayManager::init() {
    return true;
}
