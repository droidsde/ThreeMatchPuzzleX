//
//  iGameStates.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 27..
//
//

#include "iGameStates.h"
#include "ThreeMatchPuzzleMachine.h"
#include "ThreeMatchPuzzleStates.h"

iGameState::iGameState(ThreeMatchPuzzleMachine* machine, CommonEnum::GameState state)
: gameMachine(machine), gameState(state)
{
    Start();
}
iGameState::~iGameState() {
    End();
}
void iGameState::setState(CommonEnum::GameState state) {
    if( isEnableTransitionAnotherState(state)==false ) {
        char message[128];
        printf(message, "You can't transit ""%s"" state.", CommonEnum::getStringForGameState(state));
        CCAssert(isEnableTransitionAnotherState(state), message);
    }
}
void iGameState::Start() {
}
void iGameState::Pause() {
}
void iGameState::End() {
}
