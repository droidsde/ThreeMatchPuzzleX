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

class ProgressControl : public cocos2d::CCLayer {
    
private:
    CommonEnum::ProgressDirection progressDirection = CommonEnum::eProgressToLeft;
    cocos2d::CCSprite* gauge = NULL;
    cocos2d::CCSprite* bg = NULL;
    
    float currentValue = 0.0f;
    float goalValue = 0.0f;
  
    virtual bool init(cocos2d::CCSprite* background,
                      cocos2d::CCSprite* progress,
                      const char* format,
                      CommonEnum::ProgressDirection direction=CommonEnum::eProgressToLeft);
    
    void updateProgress();
    
public:
    virtual void onEXit();
    virtual void update(float dt);
    virtual cocos2d::CCRect boundingBox();
    
    void setValue(float value);
    
    static ProgressControl* create(cocos2d::CCSprite* background,
                                   cocos2d::CCSprite* progress,
                                   const char* format,
                                   CommonEnum::ProgressDirection direction=CommonEnum::eProgressToLeft);
    
    static ProgressControl* create(const char* backgroundImgFileName,
                                   const char* progressImgFileName,
                                   const char* format,
                                   CommonEnum::ProgressDirection direction=CommonEnum::eProgressToLeft);
};