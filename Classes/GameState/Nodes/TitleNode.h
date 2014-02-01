//
//  TitleNode.h
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#pragma once

#include "iNode.h"
#include "CommonEnum.h"

class TitleNode : public iNode {
public:
    virtual bool init();
    virtual void onEvent(CommonEnum::Event event);
    CREATE_FUNC(TitleNode);
};