//
//  GamePlayManager.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 24..
//
//

#ifndef __ThreeMatchPuzzleX__GamePlayManager__
#define __ThreeMatchPuzzleX__GamePlayManager__

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

#endif /* defined(__ThreeMatchPuzzleX__GamePlayManager__) */
