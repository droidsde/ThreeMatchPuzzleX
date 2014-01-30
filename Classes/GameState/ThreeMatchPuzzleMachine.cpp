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
    state = new GameStateInit(this);
}
ThreeMatchPuzzleMachine::~ThreeMatchPuzzleMachine() {
    state->End();
}