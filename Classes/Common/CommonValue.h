//
//  CommonValue.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 24..
//
//

#ifndef AniCrushSagaPang_CommonValue_h
#define AniCrushSagaPang_CommonValue_h

#include "CommonEnum.h"

namespace CommonValue {
    
    typedef struct {
        unsigned short deploy;
        unsigned short major;
        unsigned short minor;
        unsigned short platform;
    } Version;

    // auto switch with platform define
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    static Version const currentVersion =  { 0, 1, 1, CommonEnum::ePlatformAndroid };
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    static Version const currentVersion =  { 0, 1, 1, CommonEnum::ePlatformiOS };
#endif
    
};


#endif
