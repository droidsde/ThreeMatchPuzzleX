//
//  ThreeMatchPuzzleScene.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include <iostream>
#include "cocos2d.h"

class ThreeMatchPuzzleScene : public cocos2d::CCLayer {
private:
    ThreeMatchPuzzleScene();
    virtual ~ThreeMatchPuzzleScene();
    
public:
    static cocos2d::CCScene* scene();
    virtual bool init();
    virtual void update(float dt);
    
    CREATE_FUNC(ThreeMatchPuzzleScene);
};

