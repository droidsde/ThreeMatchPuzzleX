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

class ProgressControl : public cocos2d::CCNode {
private:
    CommonEnum::ProgressDirection progressDirection = CommonEnum::eProgressToLeft;
  
    // add format for display label on progress bar
    // add label
    // add bg
    // add progress bar
    
public:
    virtual bool init();
    virtual void onEXit();
    
    static ProgressControl* create(cocos2d::CCSprite* background,
                                   cocos2d::CCSprite* progress,
                                   const char* format,
                                   CommonEnum::ProgressDirection direction=CommonEnum::eProgressToLeft);
    
    static ProgressControl* create(const char* backgroundImgFileName,
                                   const char* progressImgFileName,
                                   const char* format,
                                   CommonEnum::ProgressDirection direction=CommonEnum::eProgressToLeft);
};