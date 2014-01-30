//
//  CommonEnum.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "CommonEnum.h"

const char* CommonEnum::getStringForGameState(GameState state)
{
    switch( state )
    {
        case eGameStateUnknown:
            return "eGameStateUnknown";
        case eGameStateInit:
            return "eGameStateInit";
        case eGameStateIdle:
            return "eGameStateIdle";
        case eGameStateStart:
            return "eGameStateStart";
        case eGameStatePlay:
            return "eGameStatePlay";
        case eGameStatePause:
            return "eGameStatePause";
        case eGameStateResult:
            return "eGameStateResult";
        case eGameStateExit:
            return "eGameStateExit";
        default:
            return "Not recognized.";
    }
}
