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
#include "cocos2d.h"

class ThreeMatchPuzzleMachine;

class GameStateInit : public iGameState {
private:
    float shownTime = 0;
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStateInit(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStateInit();
    
    virtual void Start(cocos2d::CCScene* scene);
    virtual void Update(float delta);
    virtual void End();
};

class GameStateIdle : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStateIdle(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStateIdle();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateStart : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStateStart(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStateStart();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateStages : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStateStages(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStateStages();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateStagePreview : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStateStagePreview(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStateStagePreview();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};


class GameStatePlay : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStatePlay(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStatePlay();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStatePause : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStatePause(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStatePause();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateResult : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStateResult(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStateResult();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateSuccess : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStateSuccess(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStateSuccess();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateFail : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStateFail(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStateFail();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStateExit : public iGameState {
protected:
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state);
    
public:
    GameStateExit(ThreeMatchPuzzleMachine* machine);
    virtual ~GameStateExit();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

#endif /* defined(__ThreeMatchPuzzleX__ThreeMatchPuzzleGameStates__) */
