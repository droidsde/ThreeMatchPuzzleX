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
        case eGameStateStages:
            return "eGameStateStages";
        case eGameStateStagePreview:
            return "eGameStateStagePreview";
        case eGameStateStart:
            return "eGameStateStart";
        case eGameStatePlay:
            return "eGameStatePlay";
        case eGameStatePause:
            return "eGameStatePause";
        case eGameStateResult:
            return "eGameStateResult";
        case eGameStateSuccess:
            return "eGameStateSuccess";
        case eGameStateFail:
            return "eGameStateFail";
        case eGameStateExit:
            return "eGameStateExit";
        default:
            return "Not recognized.";
    }
}

const char* CommonEnum::getStringForState(State state)
{
    switch( state )
    {
        case eStateSplash:
            return "eStateSplash";
        case eStateIntro:
            return "eStateIntro";
        case eStateTitle:
            return "eStateTitle";
        case eStateStages:
            return "eStateStages";
        case eStateStagePreview:
            return "eStateStagePreview";
        case eStateItemSelect:
            return "eStateItemSelect";
        case eStateGameReady:
            return "eStateGameReady";
        case eStateGamePlay:
            return "eStateGamePlay";
        case eStateGamePause:
            return "eStateGamePause";
        case eStatePlayResult:
            return "eStatePlayResult";
        case eStateStory:
            return "eStateStory";
        case eStateStore:
            return "eStateStore";
        default:
            return "Not recognized.";
    }
}