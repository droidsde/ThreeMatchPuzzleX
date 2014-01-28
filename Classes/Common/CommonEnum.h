//
//  CommonEnum.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __AniCrushSagaPang__CommonEnum__
#define __AniCrushSagaPang__CommonEnum__

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

#endif /* defined(__AniCrushSagaPang__CommonEnum__) */
