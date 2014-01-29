//
//  iScenes.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __ThreeMatchPuzzleX__iScenes__
#define __ThreeMatchPuzzleX__iScenes__

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

#endif /* defined(__ThreeMatchPuzzleX__iScenes__) */
