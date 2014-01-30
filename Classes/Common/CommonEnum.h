//
//  CommonEnum.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 23..
//
//

#pragma once

#include <iostream>

namespace CommonEnum {
    
    typedef enum {
        eSceneUnknown,
        eSceneSplash,
        eSceneTitle,
        eSceneHome,
        eSceneGame,
    } SceneType;
    
    typedef enum {
        ePlatformUnknown,
        ePlatformiOS,
        ePlatformAndroid,
    } PlatformType;
    
    typedef enum {
        eBlockUnknown,
        eBlockNormal,
    } BlockType;
    
    typedef enum {
        eGameStateUnknown,
        eGameStateInit,
        eGameStateIdle,
        eGameStateStart,
        eGameStatePlay,
        eGameStatePause,
        eGameStateResult,
        eGameStateExit,
    } GameState;
    
    const char* getStringForGameState(GameState state);
    
};

//#endif /* defined(__ThreeMatchPuzzleX__CommonEnum__) */
