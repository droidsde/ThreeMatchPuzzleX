//
//  iEvent.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 2. 1..
//
//

#pragma once

#include "CommonEnum.h"

class iEventHandler {
public:
    virtual void onEvent(CommonEnum::Event event) = 0;
};