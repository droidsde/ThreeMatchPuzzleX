//
//  ThreeMatchPuzzleMachine.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 29..
//
//

#include "ThreeMatchPuzzleMachine.h"
#include "ThreeMatchPuzzleStates.h"
#include "ThreeMatchPuzzleScene.h"

USING_NS_CC;

static ThreeMatchPuzzleMachine* pInstance = NULL;

ThreeMatchPuzzleMachine* ThreeMatchPuzzleMachine::getInstance() {
    if( pInstance==NULL )
        pInstance = new ThreeMatchPuzzleMachine();
    return pInstance;
}
ThreeMatchPuzzleMachine::ThreeMatchPuzzleMachine() {
}

ThreeMatchPuzzleMachine::~ThreeMatchPuzzleMachine() {
    if( gameState!=NULL )
        delete gameState;
    gameState = NULL;
}
void ThreeMatchPuzzleMachine::setState(CommonEnum::GameState state) {
    if( gameState!=NULL )
        delete gameState;
    gameState = NULL;
    
    gameState = Create(state);
    gameState->Start();
}
iGameState* ThreeMatchPuzzleMachine::Create(CommonEnum::GameState state) {
    switch (state) {
        case CommonEnum::eGameStateInit:
            return new GameStateInit(this);
            
        case CommonEnum::eGameStateIdle:
            return new GameStateIdle(this);
            
        case CommonEnum::eGameStateStages:
            return new GameStateStages(this);
            
        case CommonEnum::eGameStateStagePreview:
            return new GameStateStagePreview(this);
            
        case CommonEnum::eGameStateStart:
            return new GameStateStart(this);
            
        case CommonEnum::eGameStatePlay:
            return new GameStatePlay(this);
            
        case CommonEnum::eGameStatePause:
            return new GameStatePause(this);
            
        case CommonEnum::eGameStateResult:
            return new GameStateResult(this);
            
        case CommonEnum::eGameStateSuccess:
            return new GameStateSuccess(this);
            
        case CommonEnum::eGameStateFail:
            return new GameStateFail(this);
            
        case CommonEnum::eGameStateExit:
            return new GameStateExit(this);
        default:
        {
            char message[128];
            printf(message, "You can't create ""%s"" state.", CommonEnum::getStringForGameState(state));
            CCAssert(true, message);
        }
    }
    
    // implement for avoding warning!
    return NULL;
}
void ThreeMatchPuzzleMachine::Start() {
    CCScene* scene = ThreeMatchPuzzleScene::scene();
    CCDirector::sharedDirector()->runWithScene(scene);
    gameState = Create(CommonEnum::eGameStateInit);
    gameState->Start(scene);
}

void ThreeMatchPuzzleMachine::update(float dt) {
    if( gameState!=NULL )
        gameState->Update(dt);
}