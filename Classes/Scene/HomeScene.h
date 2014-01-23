//
//  HomeScene.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __AniCrushSagaPang__HomeScene__
#define __AniCrushSagaPang__HomeScene__

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

#endif /* defined(__AniCrushSagaPang__HomeScene__) */
