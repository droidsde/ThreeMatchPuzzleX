//
//  iGameStatus.cpp
//  AniCrushSagaPang
//
//  Created by Cody on 2014. 1. 27..
//
//

#include "iGameStatus.h"

iGameStatus::iGameStatus(CommonEnum::GameStatus status) {
    gameStatus = status;
}
iGameStatus::~iGameStatus() {
}
void iGameStatus::Start() {
}
void iGameStatus::Pause() {
}
void iGameStatus::End() {
}