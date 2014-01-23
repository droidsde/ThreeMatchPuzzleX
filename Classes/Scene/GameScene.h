//
//  GameScene.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __AniCrushSagaPang__GameScene__
#define __AniCrushSagaPang__GameScene__

#include <iostream>
#include "iScene.h"

class GameScene : public iScene {
public:
    virtual bool init();
    
    CREATE_FUNC(GameScene);
};

#endif /* defined(__AniCrushSagaPang__GameScene__) */
