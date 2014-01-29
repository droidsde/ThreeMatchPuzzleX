//
//  iGameStatus.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 27..
//
//

#ifndef __ThreeMatchPuzzleX__iGameStatus__
#define __ThreeMatchPuzzleX__iGameStatus__

#include <iostream>
#include "cocos2d.h"
#include "CommonEnum.h"

class iGameStatus : public cocos2d::CCObject {
protected:
    iGameStatus(CommonEnum::GameStatus status);
    virtual ~iGameStatus();
    
    CommonEnum::GameStatus gameStatus = CommonEnum::eGameStatusUnknown;
    
public:
    virtual void Start();
    virtual void Pause();
    virtual void End();
};

#endif /* defined(__ThreeMatchPuzzleX__iGameStatus__) */
