/*
 * LevelTwoState.cpp
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#include "LevelOneState.h"
#include "LevelTwoState.h"
#include "LevelThreeState.h"

LevelTwoState::~LevelTwoState() {
	// TODO Auto-generated destructor stub
}

LevelTwoState::LevelTwoState() : LevelState("level2") {
}

void LevelTwoState::handle() {
	cout << "The country is at level2: Take caution"<<endl;
}

LevelState * LevelTwoState::changePandemicLevel(bool state) {
	if (state) {
		return new LevelThreeState();
	}
	else
		return new LevelOneState();
}

