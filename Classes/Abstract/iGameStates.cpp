//
//  iGameStates.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 27..
//
//

#include "iGameStates.h"

iGameState::iGameState(CommonEnum::GameState state) {
    gameState = state;
}
iGameState::~iGameState() {
}
void iGameState::Start() {
}
void iGameState::Pause() {
}
void iGameState::End() {
}