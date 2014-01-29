//
//  GameScene.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __ThreeMatchPuzzleX__GameScene__
#define __ThreeMatchPuzzleX__GameScene__

#include <iostream>
#include "iScene.h"

class GameScene : public iScene {
private:
    GameScene();
    virtual ~GameScene();
    
public:
    static cocos2d::CCScene* scene();
    
private:
    virtual bool init();
    CREATE_FUNC(GameScene);
};

#endif /* defined(__ThreeMatchPuzzleX__GameScene__) */
