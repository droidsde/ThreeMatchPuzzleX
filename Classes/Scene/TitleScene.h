//
//  TitleScene.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __AniCrushSagaPang__TitleScene__
#define __AniCrushSagaPang__TitleScene__

#include <iostream>
#include "iScene.h"

class TitleScene : public iScene {
private:
    TitleScene();
    virtual ~TitleScene();
    
public:
    static cocos2d::CCScene* scene();
    
private:
    virtual bool init();
    CREATE_FUNC(TitleScene);
};

#endif /* defined(__AniCrushSagaPang__TitleScene__) */
