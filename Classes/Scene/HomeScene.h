//
//  HomeScene.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __ThreeMatchPuzzleX__HomeScene__
#define __ThreeMatchPuzzleX__HomeScene__

#include <iostream>
#include "iScene.h"

class HomeScene : public iScene {
private:
    HomeScene();
    virtual ~HomeScene();
    
public:
    static cocos2d::CCScene* scene();
    
private:
    virtual bool init();
    CREATE_FUNC(HomeScene);
};

#endif /* defined(__ThreeMatchPuzzleX__HomeScene__) */
