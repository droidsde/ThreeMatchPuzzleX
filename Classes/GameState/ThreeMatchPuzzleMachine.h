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
#include "CommonEnum.h"

//#include "ThreeMatchPuzzleStates.h"
//class AbstractState;
class iGameState;

class ThreeMatchPuzzleMachine {    
public:
    ThreeMatchPuzzleMachine();
    ~ThreeMatchPuzzleMachine();

//    void sell(int quantity);
//    void refill(int quantity);
//    int getCurrentStock();
    
private:
    iGameState* state = NULL;
    iGameState* Create(CommonEnum::GameState state);
};


#endif /* defined(__ThreeMatchPuzzleX__ThreeMatchPuzzleMachine__) */
