//
//  SplashScene.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __AniCrushSagaPang__SplashScene__
#define __AniCrushSagaPang__SplashScene__

#include <iostream>
#include "iScene.h"

class SplashScene : public iScene {
public:
    virtual bool init();
    
    CREATE_FUNC(SplashScene);
};

#endif /* defined(__AniCrushSagaPang__SplashScene__) */
