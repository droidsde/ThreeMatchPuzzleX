//
//  iScenes.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __AniCrushSagaPang__iScenes__
#define __AniCrushSagaPang__iScenes__

#include <iostream>
#include "cocos2d.h"

class iScene : public cocos2d::CCLayer {
protected:
    const char* sceneName;
    
protected:
    iScene();
    virtual ~iScene();
    
public:
    virtual bool init();
};

#endif /* defined(__AniCrushSagaPang__iScenes__) */
