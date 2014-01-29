//
//  NativeManager.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 24..
//
//

#ifndef __ThreeMatchPuzzleX__NativeManager__
#define __ThreeMatchPuzzleX__NativeManager__

#include <iostream>
#include "cocos2d.h"
#include "AppDelegate.h"

class NativeManager : public cocos2d::CCObject {
    friend class AppDelegate;
    
private:
    NativeManager();
    virtual ~NativeManager();
    virtual bool init();
    
public:
    static NativeManager* getInstance();
    
    CREATE_FUNC(NativeManager);
};

#endif /* defined(__ThreeMatchPuzzleX__NativeManager__) */
