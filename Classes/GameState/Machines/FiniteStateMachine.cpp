//
//  FiniteStateMachine.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "FiniteStateMachine.h"
#include "ThreeMatchPuzzleScene.h"
#include "iState.h"
#include "SplashState.h"
#include "IntroState.h"
#include "TitleState.h"

USING_NS_CC;

static FiniteStateMachine* pInstance = NULL;

FiniteStateMachine* FiniteStateMachine::getInstance() {
    if( pInstance==NULL )
        pInstance = new FiniteStateMachine();
    
    return pInstance;
}
void FiniteStateMachine::startWithState(CommonEnum::State state) {
    CCScene* scene = ThreeMatchPuzzleScene::scene();
    CCDirector::sharedDirector()->runWithScene(scene);
    
    currentState = create(state);
    currentState->start(scene);
}
void FiniteStateMachine::start() {
    startWithState(CommonEnum::eStateSplash);
}
void FiniteStateMachine::update(float dt) {
    if( currentState!=NULL )
        currentState->update(dt);
}
iState* FiniteStateMachine::create(CommonEnum::State targetState, bool dontRemoveCurrentState) {
    switch (targetState) {
        case CommonEnum::eStateSplash:
            return new SplashState();
        case CommonEnum::eStateIntro:
            return new IntroState();
        case CommonEnum::eStateTitle:
            return new TitleState();
        default:
        {
            char message[64];
            printf(message, "You can't create ""%s"" state.", CommonEnum::getStringForState(targetState));
            CCAssert(true, message);
        }
    }
    
    return NULL;
}
void FiniteStateMachine::setState(CommonEnum::State targetState, bool dontRemoveCurrentState) {
    if( dontRemoveCurrentState==false ) {
        currentState->release();
        currentState = NULL;
    }
    
    currentState = create(targetState, dontRemoveCurrentState);
    CCScene* runningScene = CCDirector::sharedDirector()->getRunningScene();
    currentState->start(runningScene);
}
