//
//  SceneManager.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 23..
//
//

#ifndef __ThreeMatchPuzzleX__SceneManager__
#define __ThreeMatchPuzzleX__SceneManager__

#include <iostream>
#include "cocos2d.h"
#include "CommonEnum.h"

class SceneManager : cocos2d::CCObject {
    friend class AppDelegate;
private:
    SceneManager();
    virtual ~SceneManager();
    virtual bool init();
    
    cocos2d::CCScene* getScene(CommonEnum::SceneType sceneType);
    
public:
    static SceneManager* getInstance();
    CREATE_FUNC(SceneManager);
    
    void moveToScene(CommonEnum::SceneType sceneType, bool isReplace=false);
    
};

#endif /* defined(__ThreeMatchPuzzleX__SceneManager__) */
