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
        eGameStateStages,
        eGameStateStagePreview,
        eGameStateStart,
        eGameStatePlay,
        eGameStatePause,
        eGameStateResult,
        eGameStateSuccess,
        eGameStateFail,
        eGameStateExit,
    } GameState;
    
    const char* getStringForGameState(GameState state);
    
    typedef enum {
        eStateUnknown,
        eStateSplash,
        eStateIntro,
        eStateTitle,
        eStateStages,
        eStateStagePreview,
        eStateItemSelect,
        eStateGameReady,
        eStateGamePlay,
        eStateGamePause,
        eStatePlayResult,
        eStateStory,
        eStateStore,
    } State;
    
    const char* getStringForState(State state);
    
    typedef enum {
        eEventUnknown,
        
        eEventSplashFadein,
        eEventSplashFadeout,
        eEventSplashFadeoutFinished,
        
        eEventIntroEnded,
        
    } Event;
    
    typedef enum {
        eProgressToLeft,
        eProgressToRight,
    } ProgressDirection;
};

//#endif /* defined(__ThreeMatchPuzzleX__CommonEnum__) */
