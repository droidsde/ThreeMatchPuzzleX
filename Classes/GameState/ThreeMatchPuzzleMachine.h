//
//  ThreeMatchPuzzleMachine.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 29..
//
//

#pragma once

#include <iostream>
#include "CommonEnum.h"

class iGameState;

class ThreeMatchPuzzleMachine {    
public:
    ThreeMatchPuzzleMachine();
    ~ThreeMatchPuzzleMachine();

private:
    iGameState* state = NULL;
    iGameState* Create(CommonEnum::GameState state);
};
