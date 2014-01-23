//
//  SceneManager.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __AniCrushSagaPang__SceneManager__
#define __AniCrushSagaPang__SceneManager__

#include <iostream>
#include "cocos2d.h"

class SceneManager : cocos2d::CCObject {
private:
    SceneManager();
    virtual ~SceneManager();
public:
    virtual bool init();
    CREATE_FUNC(SceneManager);
};

#endif /* defined(__AniCrushSagaPang__SceneManager__) */
