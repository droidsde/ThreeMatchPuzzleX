//
//  GamePlayManager.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 24..
//
//

#ifndef __AniCrushSagaPang__GamePlayManager__
#define __AniCrushSagaPang__GamePlayManager__

#include <iostream>
#include "cocos2d.h"
#include "AppDelegate.h"

class GamePlayManager : public cocos2d::CCObject {
    friend class AppDelegate;
    
private:
    GamePlayManager();
    virtual ~GamePlayManager();
    virtual bool init();
    
public:
    static GamePlayManager* getInstance();
    CREATE_FUNC(GamePlayManager);
    
};

#endif /* defined(__AniCrushSagaPang__GamePlayManager__) */
