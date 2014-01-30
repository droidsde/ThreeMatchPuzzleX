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
#include "cocos2d.h"

class iGameState;

class ThreeMatchPuzzleMachine : cocos2d::CCObject {
    friend class AppDelegate;
    friend class ThreeMatchPuzzleScene;
    
public:
    static ThreeMatchPuzzleMachine* getInstance();
    void Start();
    
    void setState(CommonEnum::GameState state);

private:
    ThreeMatchPuzzleMachine();
    virtual ~ThreeMatchPuzzleMachine();
    void update(float dt);
    
    iGameState* gameState = NULL;
    iGameState* Create(CommonEnum::GameState state);
};
