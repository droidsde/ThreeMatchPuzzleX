//
//  FiniteStateMachine.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "cocos2d.h"
#include "CommonEnum.h"

class iState;

class FiniteStateMachine : cocos2d::CCObject {
    friend class AppDelegate;
    friend class ThreeMatchPuzzleScene;

public:
    static FiniteStateMachine* getInstance();
    void setState(CommonEnum::State targetState);
    
    void start();
    void update(float dt);
    
protected:
    iState* currentState;
    iState* create(CommonEnum::State targetState);
};

//void ThreeMatchPuzzleMachine::Start() {
//    CCScene* scene = ThreeMatchPuzzleScene::scene();
//    CCDirector::sharedDirector()->runWithScene(scene);
//    gameState = Create(CommonEnum::eGameStateInit);
//    gameState->Start(scene);
//}
//
//void ThreeMatchPuzzleMachine::update(float dt) {
//    if( gameState!=NULL )
//        gameState->Update(dt);
//}


//void Start();
//
//void setState(CommonEnum::GameState state);
//
//private:
//ThreeMatchPuzzleMachine();
//virtual ~ThreeMatchPuzzleMachine();
//void update(float dt);
//
//iGameState* gameState = NULL;
//iGameState* Create(CommonEnum::GameState state);
