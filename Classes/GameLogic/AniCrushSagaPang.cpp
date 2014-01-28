//
//  AniCrushSagaPang.cpp
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 27..
//
//

#include "AniCrushSagaPang.h"
#include "CommonEnum.h"

//eGameStatusInit,
GameStatusInit::GameStatusInit() : iGameStatus(CommonEnum::eGameStatusInit)
{
}
GameStatusInit::~GameStatusInit()
{
}

//eGameStatusStart,
GameStatusStart::GameStatusStart() : iGameStatus(CommonEnum::eGameStatusStart)
{
}
GameStatusStart::~GameStatusStart()
{
}

//eGameStatusPlay,
GameStatusPlay::GameStatusPlay() : iGameStatus(CommonEnum::eGameStatusPlay)
{
}
GameStatusPlay::~GameStatusPlay()
{
}

//eGameStatusPause,
GameStatusPause::GameStatusPause() : iGameStatus(CommonEnum::eGameStatusPause)
{
}
GameStatusPause::~GameStatusPause()
{
}

//eGameStatusResult,
GameStatusResult::GameStatusResult() : iGameStatus(CommonEnum::eGameStatusResult)
{
}
GameStatusResult::~GameStatusResult()
{
}

//eGameStatusExit,
GameStatusExit::GameStatusExit() : iGameStatus(CommonEnum::eGameStatusExit)
{
}
GameStatusExit::~GameStatusExit()
{
}

