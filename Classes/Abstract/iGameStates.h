//
//  iGameStatus.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 27..
//
//

#ifndef __ThreeMatchPuzzleX__iGameStates__
#define __ThreeMatchPuzzleX__iGameStates__

#include <iostream>
#include "cocos2d.h"
#include "CommonEnum.h"

class ThreeMatchPuzzleMachine;

class iGameState {
    friend class ThreeMatchPuzzleMachine;
    
private:
    CommonEnum::GameState const gameState;
    ThreeMatchPuzzleMachine* const gameMachine;
    
protected:
    iGameState(ThreeMatchPuzzleMachine* machine, CommonEnum::GameState state);
    virtual ~iGameState();
    
    virtual void setState(CommonEnum::GameState state);
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state) = 0;
    
public:
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

#endif /* defined(__ThreeMatchPuzzleX__iGameStates) */
