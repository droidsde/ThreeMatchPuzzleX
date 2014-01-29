//
//  ThreeMatchPuzzleGameStates.cpp
//  ThreeMatchPuzzleGameStates
//
//  Created by Cody on 2014. 1. 27..
//
//

#include "ThreeMatchPuzzleStates.h"
#include "CommonEnum.h"

//eGameStateInit,
GameStateInit::GameStateInit() : iGameState(CommonEnum::eGameStateInit)
{
}
GameStateInit::~GameStateInit()
{
}
void GameStateInit::Start() {
    iGameState::Start();
}
void GameStateInit::Pause() {
}
void GameStateInit::End() {
}

//eGameStateStart,
GameStateStart::GameStateStart() : iGameState(CommonEnum::eGameStateStart)
{
}
GameStateStart::~GameStateStart()
{
}
void GameStateStart::Start() {
    iGameState::Start();
}
void GameStateStart::Pause() {
}
void GameStateStart::End() {
}


//eGameStatePlay,
GameStatePlay::GameStatePlay() : iGameState(CommonEnum::eGameStatePlay)
{
}
GameStatePlay::~GameStatePlay()
{
}
void GameStatePlay::Start() {
    iGameState::Start();
}
void GameStatePlay::Pause() {
}
void GameStatePlay::End() {
}


//eGameStatePause,
GameStatePause::GameStatePause() : iGameState(CommonEnum::eGameStatePause)
{
}
GameStatePause::~GameStatePause()
{
}
void GameStatePause::Start() {
    iGameState::Start();
}
void GameStatePause::Pause() {
    iGameState::Pause();
}
void GameStatePause::End() {
    
}


//eGameStateResult,
GameStateResult::GameStateResult() : iGameState(CommonEnum::eGameStateResult)
{
}
GameStateResult::~GameStateResult()
{
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
GameStateExit::GameStateExit() : iGameState(CommonEnum::eGameStateExit)
{
}
GameStateExit::~GameStateExit()
{
}
void GameStateExit::Start() {
}
void GameStateExit::Pause() {
}
void GameStateExit::End() {
}

