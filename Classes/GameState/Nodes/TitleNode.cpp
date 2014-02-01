//
//  TitleNode.cpp
//  ThreeMatchPuzzleX
//
//  Created by Cody on 2014. 1. 30..
//
//

#include "TitleNode.h"

bool TitleNode::init() {
    if( !iNode::init() )
        return false;
    
    return true;
}
void TitleNode::onEvent(CommonEnum::Event event) {
}