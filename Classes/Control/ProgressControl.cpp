//
//  ProgressControl.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 2. 4..
//
//

#include "ProgressControl.h"

USING_NS_CC;

bool ProgressControl::init(CCSprite* background,
                           CCSprite* progress,
                           const char* format,
                           CCNode* target,
                           SEL_CallFuncO endSelector,
                           CommonEnum::ProgressDirection direction) {
    if( !CCNode::init() )
        return false;
    
    this->setAnchorPoint(ccp(0,0));
    this->setPosition(ccp(0, 0));
    
    bg = background;
    bg->retain();
    
    gauge = progress;
    gauge->retain();
    
    this->addChild(bg);
    this->addChild(gauge);
    
    progressDirection = direction;
    
    selectorTarget = target;
    if( selectorTarget!=NULL )
        selectorTarget->retain();
    selector = endSelector;
    
    
    float scaleFactor = CCDirector::sharedDirector()->getContentScaleFactor();
    
    if( direction==CommonEnum::eProgressToLeft ) {
        background->setAnchorPoint(ccp(1, 0));
        progress->setAnchorPoint(ccp(1, 0));
        background->setPosition(ccp(background->getTexture()->getPixelsWide()/scaleFactor, 0));
        progress->setPosition(ccp(progress->getTexture()->getPixelsWide()/scaleFactor, 0));
    }
    else {
        background->setAnchorPoint(ccp(0, 0));
        progress->setAnchorPoint(ccp(0, 0));
        background->setPosition(ccp(0, 0));
        progress->setPosition(ccp(0, 0));
    }
    
    goalValue = currentValue = 0.0f;
    updateProgress();
        
    return true;
}
void ProgressControl::updateProgress() {
    unsigned int width = gauge->getTexture()->getPixelsWide();
    unsigned int height = gauge->getTexture()->getPixelsHigh();
    float scaleFactor = CCDirector::sharedDirector()->getContentScaleFactor();
    
    if( progressDirection==CommonEnum::eProgressToLeft ) {
        gauge->setTextureRect(CCRectMake(width/scaleFactor-width/scaleFactor*(currentValue), 0, width/scaleFactor, height/scaleFactor));
        gauge->setPosition(ccp(width/scaleFactor+width/scaleFactor-width/scaleFactor*(currentValue), 0));
    }
    else if( progressDirection==CommonEnum::eProgressToRight ) {
        gauge->setTextureRect(CCRectMake(0, 0, width/scaleFactor*currentValue, height/scaleFactor));
    }
}
void ProgressControl::setValue(float value) {
    CCAssert(gauge!=NULL, "gauge instance is NULL!");
    
    scheduleUpdate();
    
    if( value>1.0f )
        value = 1.0f;
    
    goalValue = value;
}
void ProgressControl::onExit() {
    if( selectorTarget!=NULL )
        delete selectorTarget;
    selectorTarget = NULL;
    
    if( bg!=NULL )
        delete bg;
    bg = NULL;
    
    if( gauge!=NULL )
        delete gauge;
    gauge = NULL;
}
void ProgressControl::update(float dt) {
    if( goalValue<=currentValue ) {
        unscheduleUpdate();
        
        if( selectorTarget!=NULL && selector!=NULL ) {
            (selectorTarget->*selector)(this);
        }
        return;
    }
    
    currentValue = currentValue+dt;
    
    updateProgress();
}
CCRect ProgressControl::boundingBox() {
    CCRect boundingBox = bg->boundingBox();
    boundingBox = CCRectMake(boundingBox.origin.x, boundingBox.origin.y, boundingBox.size.width*this->getScaleX(), boundingBox.size.height*this->getScaleY());
    return boundingBox;
}
ProgressControl* ProgressControl::create(cocos2d::CCSprite* background,
                                         cocos2d::CCSprite* progress,
                                         const char* format,
                                         cocos2d::CCNode* target,
                                         cocos2d::SEL_CallFuncO endSelector,
                                         CommonEnum::ProgressDirection direction)
{
    CCAssert(background!=NULL&&progress!=NULL, "Background or Progress Sprite is NULL!");
    
    ProgressControl* progressControl = new ProgressControl();
    if( progressControl!=NULL && progressControl->init(background, progress, format, target, endSelector, direction) ) {
        progressControl->autorelease();
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
                                         cocos2d::CCNode* target,
                                         cocos2d::SEL_CallFuncO endSelector,
                                         CommonEnum::ProgressDirection direction)
{
    CCSprite* background = CCSprite::create(backgroundImgFileName);
    CCSprite* progress = CCSprite::create(progressImgFileName);
    
    ProgressControl* progressControl = ProgressControl::create(background, progress, format, target, endSelector, direction);
    return progressControl;
}