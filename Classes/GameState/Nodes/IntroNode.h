//
//  IntroNode.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iNode.h"
#include "CommonEnum.h"

class IntroNode : public iNode {
public:
    virtual bool init();
    CREATE_FUNC(IntroNode);
    
    void onEvent(CommonEnum::Event event);
};