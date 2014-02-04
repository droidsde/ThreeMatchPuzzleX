//
//  ProgressControl.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 2. 4..
//
//

#include "ProgressControl.h"

USING_NS_CC;

bool ProgressControl::init() {
    if( !CCNode::init() )
        return false;
    
    return true;
}
void ProgressControl::onEXit() {
    
}
ProgressControl* ProgressControl::create(cocos2d::CCSprite* background,
                                         cocos2d::CCSprite* progress,
                                         const char* format,
                                         CommonEnum::ProgressDirection direction)
{
    ProgressControl* progressControl = new ProgressControl();
    if( progressControl!=NULL && progressControl->init() ) {
        progressControl->autorelease();
        
        progressControl->progressDirection = direction;
        
        return progressControl;
    }
    else {
        delete progressControl;
        progressControl = NULL;
        return progressControl;
    }
}

ProgressControl* ProgressControl::create(const char* backgroundImgFileName,
                               const char* progressImgFileName,
                               const char* format,
                               CommonEnum::ProgressDirection direction)
{
    CCSprite* background = CCSprite::create(backgroundImgFileName);
    CCSprite* progress = CCSprite::create(progressImgFileName);
    
    ProgressControl* progressControl = ProgressControl::create(background, progress, format, direction);
    return progressControl;
}