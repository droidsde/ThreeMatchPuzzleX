//
//  AniCrushSagaPangScene.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __AniCrushSagaPang__AniCrushSagaPangScene__
#define __AniCrushSagaPang__AniCrushSagaPangScene__

#include <iostream>
#include "iScenes.h"
#include "cocos2d.h"
#include "SceneManager.h"

class AniCrushSagaPangScenes : public iScenes, cocos2d::CCObject {
protected:
    AniCrushSagaPangScenes();
    virtual ~AniCrushSagaPangScenes();
public:
    friend class SceneManager;
    
    virtual bool init();
    CREATE_FUNC(AniCrushSagaPangScenes);
};

#endif /* defined(__AniCrushSagaPang__AniCrushSagaPangScene__) */
