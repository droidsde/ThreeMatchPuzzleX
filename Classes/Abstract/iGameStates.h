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

class iGameState : public cocos2d::CCObject {
protected:
    iGameState(CommonEnum::GameState state);
    virtual ~iGameState();
    
    CommonEnum::GameState gameState = CommonEnum::eGameStateUnknown;
    
public:
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

#endif /* defined(__ThreeMatchPuzzleX__iGameStates) */
