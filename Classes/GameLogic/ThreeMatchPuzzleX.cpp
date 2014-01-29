//
//  ThreeMatchPuzzleX.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 27..
//
//

#include "ThreeMatchPuzzleX.h"
#include "CommonEnum.h"

//eGameStatusInit,
GameStatusInit::GameStatusInit() : iGameStatus(CommonEnum::eGameStatusInit)
{
}
GameStatusInit::~GameStatusInit()
{
}
void GameStatusInit::Start() {
    iGameStatus::Start();
}
void GameStatusInit::Pause() {
}
void GameStatusInit::End() {
}

//eGameStatusStart,
GameStatusStart::GameStatusStart() : iGameStatus(CommonEnum::eGameStatusStart)
{
}
GameStatusStart::~GameStatusStart()
{
}
void GameStatusStart::Start() {
    iGameStatus::Start();
}
void GameStatusStart::Pause() {
}
void GameStatusStart::End() {
}


//eGameStatusPlay,
GameStatusPlay::GameStatusPlay() : iGameStatus(CommonEnum::eGameStatusPlay)
{
}
GameStatusPlay::~GameStatusPlay()
{
}
void GameStatusPlay::Start() {
    iGameStatus::Start();
}
void GameStatusPlay::Pause() {
}
void GameStatusPlay::End() {
}


//eGameStatusPause,
GameStatusPause::GameStatusPause() : iGameStatus(CommonEnum::eGameStatusPause)
{
}
GameStatusPause::~GameStatusPause()
{
}
void GameStatusPause::Start() {
    iGameStatus::Start();
}
void GameStatusPause::Pause() {
    iGameStatus::Pause();
}
void GameStatusPause::End() {
    
}


//eGameStatusResult,
GameStatusResult::GameStatusResult() : iGameStatus(CommonEnum::eGameStatusResult)
{
}
GameStatusResult::~GameStatusResult()
{
}
void GameStatusResult::Start() {
    iGameStatus::Start();
}
void GameStatusResult::Pause() {
    iGameStatus::Pause();
}
void GameStatusResult::End() {
}


//eGameStatusExit,
GameStatusExit::GameStatusExit() : iGameStatus(CommonEnum::eGameStatusExit)
{
}
GameStatusExit::~GameStatusExit()
{
}
void GameStatusExit::Start() {
}
void GameStatusExit::Pause() {
}
void GameStatusExit::End() {
}

