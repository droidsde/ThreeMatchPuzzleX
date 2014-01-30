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

//eGameStateInit,
GameStateInit::GameStateInit(ThreeMatchPuzzleMachine* machine)
: iGameState(machine, CommonEnum::eGameStateInit)
{
}
GameStateInit::~GameStateInit()
{
}
bool GameStateInit::isEnableTransitionAnotherState(CommonEnum::GameState state) {
    return false;
}
void GameStateInit::Start() {
    iGameState::Start();
}
void GameStateInit::Pause() {
    iGameState::Pause();
}
void GameStateInit::End() {
    iGameState::End();
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
}
void GameStateIdle::Pause() {
    iGameState::Pause();
}
void GameStateIdle::End() {
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

