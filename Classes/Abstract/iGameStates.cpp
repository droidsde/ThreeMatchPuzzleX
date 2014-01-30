//
//  iGameStates.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 27..
//
//

#include "iGameStates.h"
#include "ThreeMatchPuzzleMachine.h"
#include "ThreeMatchPuzzleStates.h"

USING_NS_CC;

iGameState::iGameState(ThreeMatchPuzzleMachine* machine, CommonEnum::GameState state)
: gameMachine(machine), gameState(state), gameNode(new CCNode())
{
}
iGameState::~iGameState() {
    End();
}
void iGameState::setState(CommonEnum::GameState state) {
    if( isEnableTransitionAnotherState(state)==false ) {
        char message[128];
        printf(message, "You can't transit ""%s"" state.", CommonEnum::getStringForGameState(state));
        CCAssert(isEnableTransitionAnotherState(state), message);
    }
    
    if( gameMachine==NULL )
        CCAssert(true, "ThreeMatchPuzzleMachine instance is NULL.");
    
    gameMachine->setState(CommonEnum::eGameStateIdle);
}
void iGameState::Start() {
    CCScene* runningScene = CCDirector::sharedDirector()->getRunningScene();
    if( gameNode!=NULL && runningScene!=NULL ) {
        runningScene->addChild(gameNode);
    }
    else {
        CCAssert(true, "Please check gameNode and runningScene instance.");
    }
}
void iGameState::Start(CCScene* scene) {
    if( gameNode!=NULL && scene!=NULL ) {
        scene->addChild(gameNode);
    }
    else {
        CCAssert(true, "Please check gameNode and scene instance.");
    }
}
void iGameState::Pause() {
}
void iGameState::End() {
    if( gameNode!=NULL ) {
        gameNode->removeFromParentAndCleanup(false);
        delete gameNode;
        gameNode = NULL;
    }   
}
void iGameState::Update(float delta) {
}