//
//  ThreeMatchPuzzleMachine.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 29..
//
//

#ifndef __ThreeMatchPuzzleX__ThreeMatchPuzzleMachine__
#define __ThreeMatchPuzzleX__ThreeMatchPuzzleMachine__

#include <iostream>

//#include "ThreeMatchPuzzleStates.h"
//class AbstractState;
class iGameState;
class GameStateInit;
class GameStateIdle;

class ThreeMatchPuzzleMachine {
    friend class GameStateInit;
    
public:
    ThreeMatchPuzzleMachine();
    ~ThreeMatchPuzzleMachine();
    
//    void sell(int quantity);
//    void refill(int quantity);
//    int getCurrentStock();
private:
    iGameState* state = NULL;
};


#endif /* defined(__ThreeMatchPuzzleX__ThreeMatchPuzzleMachine__) */
