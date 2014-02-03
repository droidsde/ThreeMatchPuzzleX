//
//  TitleNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "TitleNode.h"

USING_NS_CC;

bool TitleNode::init() {
    if( !iNode::init() )
        return false;
    
    CCSize designResoulutionSize = CCEGLView::sharedOpenGLView()->getDesignResolutionSize();
    
    CCLabelTTF* sceneDebugLabel = CCLabelTTF::create();
    sceneDebugLabel->setString("Three\nMatch\nPuzzle!!!!");
    sceneDebugLabel->ce
    sceneDebugLabel->setFontSize(30);
    sceneDebugLabel->setPosition(ccp(designResoulutionSize.width/2, designResoulutionSize.height/2+100));
    sceneDebugLabel->setColor(ccRED);
    this->addChild(sceneDebugLabel);
    
    return true;
}
void TitleNode::onEvent(CommonEnum::Event event) {
}