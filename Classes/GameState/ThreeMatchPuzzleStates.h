//
//  ThreeMatchPuzzleStates.h
//  ThreeMatchPuzzleStates
//
//  Created by Cody on 2014. 1. 27..
//
//

#ifndef __ThreeMatchPuzzleX__ThreeMatchPuzzleStates__
#define __ThreeMatchPuzzleX__ThreeMatchPuzzleStates__

#include <iostream>
#include "iGameStates.h"

//eGameStateInit,
//eGameStateStart,
//eGameStatePlay,
//eGameStatePause,
//eGameStateResult,
//eGameStateExit,

class GameStateInit : public iGameState {
public:
    GameStateInit();
    virtual ~GameStateInit();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateStart : public iGameState {
public:
    GameStateStart();
    virtual ~GameStateStart();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStatePlay : public iGameState {
public:
    GameStatePlay();
    virtual ~GameStatePlay();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStatePause : public iGameState {
public:
    GameStatePause();
    virtual ~GameStatePause();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateResult : public iGameState {
public:
    GameStateResult();
    virtual ~GameStateResult();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateExit : public iGameState {
public:
    GameStateExit();
    virtual ~GameStateExit();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

#endif /* defined(__ThreeMatchPuzzleX__ThreeMatchPuzzleGameStates__) */
