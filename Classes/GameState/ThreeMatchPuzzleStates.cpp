//
//  ThreeMatchPuzzleGameStates.cpp
//  ThreeMatchPuzzleGameStates
//
//  Created by Cody on 2014. 1. 27..
//
//

#include "ThreeMatchPuzzleStates.h"
#include "ThreeMatchPuzzleMachine.h"
#include "CommonEnum.h"

#include "GameInitNode.h"
#include "GameIdleNode.h"

USING_NS_CC;

GameStateInit::GameStateInit(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateInit)
{
}
GameStateInit::~GameStateInit()
{
}
bool GameStateInit::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    if( state==CommonEnum::eGameStateIdle )
        return true;
    
    return false;
}
void GameStateInit::Start(CCScene* scene) {
    iGameState::Start(scene);
    GameInitNode* node = GameInitNode::create();
    gameNode->addChild(node);
}
void GameStateInit::End() {
    iGameState::End();
}
void GameStateInit::Update(float delta) {
    if( shownTime>2.0f) {
        setState(CommonEnum::eGameStateIdle);
    }
    else {
        shownTime += delta;
    }
}

//eGameStateIdle,
GameStateIdle::GameStateIdle(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateIdle)
{
}
GameStateIdle::~GameStateIdle()
{
}
bool GameStateIdle::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStateIdle::Start() {
    iGameState::Start();
    GameIdleNode* node = GameIdleNode::create();
    gameNode->addChild(node);
}
void GameStateIdle::Pause() {
    iGameState::Pause();
}
void GameStateIdle::End() {
    iGameState::End();
}

//eGameStateStages,
GameStateStages::GameStateStages(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateStages)
{
}
GameStateStages::~GameStateStages()
{
}
bool GameStateStages::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStateStages::Start() {
    iGameState::Start();
}
void GameStateStages::Pause() {
    iGameState::Pause();
}
void GameStateStages::End() {
    iGameState::End();
}

//eGameStateIdle,
GameStateStagePreview::GameStateStagePreview(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateStagePreview)
{
}
GameStateStagePreview::~GameStateStagePreview()
{
}
bool GameStateStagePreview::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStateStagePreview::Start() {
    iGameState::Start();
}
void GameStateStagePreview::Pause() {
    iGameState::Pause();
}
void GameStateStagePreview::End() {
    iGameState::End();
}

//eGameStateStart,
GameStateStart::GameStateStart(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateStart)
{
}
GameStateStart::~GameStateStart()
{
}
bool GameStateStart::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStateStart::Start() {
    iGameState::Start();
}
void GameStateStart::Pause() {
    iGameState::Pause();
}
void GameStateStart::End() {
    iGameState::End();
}


//eGameStatePlay,
GameStatePlay::GameStatePlay(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStatePlay)
{
}
GameStatePlay::~GameStatePlay()
{
}
bool GameStatePlay::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStatePlay::Start() {
    iGameState::Start();
}
void GameStatePlay::Pause() {
    iGameState::Pause();
}
void GameStatePlay::End() {
    iGameState::End();
}


//eGameStatePause,
GameStatePause::GameStatePause(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStatePause)
{
}
GameStatePause::~GameStatePause()
{
}
bool GameStatePause::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStatePause::Start() {
    iGameState::Start();
}
void GameStatePause::Pause() {
    iGameState::Pause();
}
void GameStatePause::End() {
    iGameState::End();
    
}

//eGameStateResult,
GameStateResult::GameStateResult(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateResult)
{
}
GameStateResult::~GameStateResult()
{
}
bool GameStateResult::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStateResult::Start() {
    iGameState::Start();
}
void GameStateResult::Pause() {
    iGameState::Pause();
}
void GameStateResult::End() {
}

//eGameStateSuccess,
GameStateSuccess::GameStateSuccess(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateSuccess)
{
}
GameStateSuccess::~GameStateSuccess()
{
}
bool GameStateSuccess::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStateSuccess::Start() {
    iGameState::Start();
}
void GameStateSuccess::Pause() {
    iGameState::Pause();
}
void GameStateSuccess::End() {
}

//eGameStateFail,
GameStateFail::GameStateFail(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateFail)
{
}
GameStateFail::~GameStateFail()
{
}
bool GameStateFail::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStateFail::Start() {
    iGameState::Start();
}
void GameStateFail::Pause() {
    iGameState::Pause();
}
void GameStateFail::End() {
}


//eGameStateExit,
GameStateExit::GameStateExit(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateExit)
{
}
GameStateExit::~GameStateExit()
{
}
bool GameStateExit::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStateExit::Start() {
}
void GameStateExit::Pause() {
}
void GameStateExit::End() {
}

