//
//  ProgressControl.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 2. 4..
//
//

#pragma once

#include "cocos2d.h"
#include "CommonEnum.h"

//class ProgressControl : public cocos2d::CCLayerColor {
class ProgressControl : public cocos2d::CCNode {

private:
    CommonEnum::ProgressDirection progressDirection = CommonEnum::eProgressToLeft;
    cocos2d::CCSprite* gauge = NULL;
    cocos2d::CCSprite* bg = NULL;
    
    cocos2d::CCNode* selectorTarget = NULL;
    cocos2d::SEL_CallFuncO selector = NULL;
    
    float currentValue = 0.0f;
    float goalValue = 0.0f;
  
    virtual bool init(cocos2d::CCSprite* background,
                      cocos2d::CCSprite* progress,
                      const char* format,
                      cocos2d::CCNode* target = NULL,
                      cocos2d::SEL_CallFuncO endSelector = NULL,
                      CommonEnum::ProgressDirection direction=CommonEnum::eProgressToRight);
    
    void updateProgress();
    
public:
    virtual void onExit();
    virtual void update(float dt);
    virtual cocos2d::CCRect boundingBox();
    
    void setValue(float value);
    inline float getValue() { return currentValue; }
        
    static ProgressControl* create(cocos2d::CCSprite* background,
                                   cocos2d::CCSprite* progress,
                                   const char* format,
                                   cocos2d::CCNode* target = NULL,
                                   cocos2d::SEL_CallFuncO endSelector = NULL,
                                   CommonEnum::ProgressDirection direction=CommonEnum::eProgressToRight);
    
    static ProgressControl* create(const char* backgroundImgFileName,
                                   const char* progressImgFileName,
                                   const char* format,
                                   cocos2d::CCNode* target = NULL,
                                   cocos2d::SEL_CallFuncO endSelector = NULL,
                                   CommonEnum::ProgressDirection direction=CommonEnum::eProgressToRight);
};
