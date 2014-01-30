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

class iGameState : public cocos2d::CCObject {
    friend class ThreeMatchPuzzleMachine;
    
private:
    CommonEnum::GameState const gameState       = CommonEnum::eGameStateUnknown;
    ThreeMatchPuzzleMachine* const gameMachine  = NULL;
    
protected:
    cocos2d::CCNode* gameNode                   = NULL;
    
    iGameState(ThreeMatchPuzzleMachine* machine, CommonEnum::GameState state);
    virtual ~iGameState();
    
    virtual void setState(CommonEnum::GameState state);
    virtual bool isEnableTransitionAnotherState(CommonEnum::GameState state) = 0;
    
public:
    virtual void Start();
    virtual void Start(cocos2d::CCScene* scene);
    virtual void Pause();
    virtual void End();
    virtual void Update(float delta);
};

#endif /* defined(__ThreeMatchPuzzleX__iGameStates) */
