//
//  CommonEnum.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __ThreeMatchPuzzleX__CommonEnum__
#define __ThreeMatchPuzzleX__CommonEnum__

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
        eGameStatusUnknown,
        eGameStatusInit,
        eGameStatusStart,
        eGameStatusPlay,
        eGameStatusPause,
        eGameStatusResult,
        eGameStatusExit,
    } GameStatus;
    
};

#endif /* defined(__ThreeMatchPuzzleX__CommonEnum__) */
