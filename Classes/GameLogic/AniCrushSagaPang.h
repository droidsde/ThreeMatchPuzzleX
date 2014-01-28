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
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStatusStart : public iGameStatus {
public:
    GameStatusStart();
    virtual ~GameStatusStart();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStatusPlay : public iGameStatus {
public:
    GameStatusPlay();
    virtual ~GameStatusPlay();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStatusPause : public iGameStatus {
public:
    GameStatusPause();
    virtual ~GameStatusPause();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStatusResult : public iGameStatus {
public:
    GameStatusResult();
    virtual ~GameStatusResult();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

class GameStatusExit : public iGameStatus {
public:
    GameStatusExit();
    virtual ~GameStatusExit();
    
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

#endif /* defined(__AniCrushSagaPang__AniCrushSagaPang__) */
