//
//  NativeManager.cpp
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 24..
//
//

#include "NativeManager.h"

static NativeManager* pInstance = NULL;
NativeManager* NativeManager::getInstance() {
    if( pInstance==NULL )
        pInstance = NativeManager::create();
    
    return pInstance;
}
NativeManager::NativeManager() {
}
NativeManager::~NativeManager() {
}
bool NativeManager::init() {
    return true;
}