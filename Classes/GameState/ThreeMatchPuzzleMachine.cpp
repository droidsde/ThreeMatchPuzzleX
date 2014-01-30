//
//  ThreeMatchPuzzleMachine.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 29..
//
//

#include "ThreeMatchPuzzleMachine.h"
#include "ThreeMatchPuzzleStates.h"

ThreeMatchPuzzleMachine::ThreeMatchPuzzleMachine() {
    state = Create(CommonEnum::eGameStateInit);
}

ThreeMatchPuzzleMachine::~ThreeMatchPuzzleMachine() {
    if( state!=NULL )
        delete state;
    state = NULL;
}

iGameState* ThreeMatchPuzzleMachine::Create(CommonEnum::GameState state) {
    switch (state) {
        case CommonEnum::eGameStateInit:
            return new GameStateInit(this);
            
        case CommonEnum::eGameStateIdle:
            return new GameStateIdle(this);
            
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

