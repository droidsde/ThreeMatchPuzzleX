//
//  IntroNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "IntroNode.h"
#include "iState.h"

USING_NS_CC;

enum IntroNodeTag {
    IntroLabelTag = 101,
};

bool IntroNode::init() {
    if( !iNode::init() )
        return false;
    
    CCTouchDispatcher* pDispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
    pDispatcher->addTargetedDelegate(this, 0, true);
    
    introDataVector = new std::vector<IntroData>();
    
    IntroData intro1 = {"","옛날 옛적에 호랑이 담배 피던 시절에"};
    introDataVector->push_back(intro1);
    
    IntroData intro2 = {"","하늘을 날 수 있는 타조와"};
    introDataVector->push_back(intro2);
    
    IntroData intro3 = {"","나무을 잘 타는 코끼리가 살았습니다."};
    introDataVector->push_back(intro3);
    
    IntroData intro4 = {"","그런데 어느 날,"};
    introDataVector->push_back(intro4);
    
    IntroData intro5 = {"","타조는 날 수 없었으며, 코끼리는 나무에 오를 수 없게 되었습니다."};
    introDataVector->push_back(intro5);
    
    showIntro();
    
    return true;
}
void IntroNode::onExit() {
    iNode::onExit();
    
    CCTouchDispatcher* pDispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
    pDispatcher->removeDelegate(this);
    
    if( introDataVector!=NULL ) {
        introDataVector->clear();
        delete introDataVector;
        introDataVector = NULL;
    }
}
void IntroNode::onEvent(CommonEnum::Event event) {
}
bool IntroNode::ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
    return true;
}
void IntroNode::ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
    CCLog("IntroNode::ccTouchEnded");
    showIntro();
}
void IntroNode::showIntro() {
    if( introDataVector->size()==0 ) {
        linkedState->onEvent(CommonEnum::eEventIntroEnded);
        return;
    }
    
    // remove old intro data
    CCLabelTTF* oldLabel = (CCLabelTTF*)this->getChildByTag(IntroLabelTag);
    if( oldLabel!=NULL ) {
        oldLabel->removeFromParent();
    }
    
    // show new intro data
    IntroData data = introDataVector->front();
    
    CCSize designResoulutionSize = CCEGLView::sharedOpenGLView()->getDesignResolutionSize();
    
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create();
    sceneDebugLabel->setString(data.introString);
    sceneDebugLabel->setTag(IntroLabelTag);
    sceneDebugLabel->setPosition(ccp(designResoulutionSize.width/2, designResoulutionSize.height/2));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    introDataVector->erase(introDataVector->begin());
}

