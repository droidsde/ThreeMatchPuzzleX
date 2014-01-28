//
//  AniCrushSagaPang.h
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 27..
//
//

#ifndef __AniCrushSagaPang__AniCrushSagaPang__
#define __AniCrushSagaPang__AniCrushSagaPang__

#include <iostream>
#include "iGameStatus.h"

//eGameStatusInit,
//eGameStatusStart,
//eGameStatusPlay,
//eGameStatusPause,
//eGameStatusResult,
//eGameStatusExit,

class GameStatusInit : public iGameStatus {
public:
    GameStatusInit();
    virtual ~GameStatusInit();
};

class GameStatusStart : public iGameStatus {
public:
    GameStatusStart();
    virtual ~GameStatusStart();
};

class GameStatusPlay : public iGameStatus {
public:
    GameStatusPlay();
    virtual ~GameStatusPlay();
};

class GameStatusPause : public iGameStatus {
public:
    GameStatusPause();
    virtual ~GameStatusPause();
};

class GameStatusResult : public iGameStatus {
public:
    GameStatusResult();
    virtual ~GameStatusResult();
};

class GameStatusExit : public iGameStatus {
public:
    GameStatusExit();
    virtual ~GameStatusExit();
};

#endif /* defined(__AniCrushSagaPang__AniCrushSagaPang__) */
