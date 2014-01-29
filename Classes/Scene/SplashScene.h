//
//  SplashScene.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __ThreeMatchPuzzleX__SplashScene__
#define __ThreeMatchPuzzleX__SplashScene__

#include <iostream>
#include "iScene.h"

class SplashScene : public iScene {
private:
    SplashScene();
    virtual ~SplashScene();
    
public:
    static cocos2d::CCScene* scene();
    
private:
    virtual bool init();
    CREATE_FUNC(SplashScene);
};

#endif /* defined(__ThreeMatchPuzzleX__SplashScene__) */
