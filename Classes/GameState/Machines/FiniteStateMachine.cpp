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

USING_NS_CC;

static FiniteStateMachine* pInstance = NULL;

FiniteStateMachine* FiniteStateMachine::getInstance() {
    if( pInstance==NULL )
        pInstance = new FiniteStateMachine();
    
    return pInstance;
}
void FiniteStateMachine::start() {
    CCScene* scene = ThreeMatchPuzzleScene::scene();
    CCDirector::sharedDirector()->runWithScene(scene);
    
    currentState = create(CommonEnum::eStateSplash);
    currentState->Start(scene);

}
void FiniteStateMachine::update(float dt) {
    if( currentState!=NULL )
        currentState->update(dt);
}
iState* FiniteStateMachine::create(CommonEnum::State targetState) {
    switch (targetState) {
        case CommonEnum::eStateSplash:
            return new SplashState(this);
        default:
        {
            char message[128];
            printf(message, "You can't create ""%s"" state.", CommonEnum::getStringForState(targetState));
            CCAssert(true, message);
        }
    }
    
    return NULL;
}
