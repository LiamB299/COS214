/*
 * LevelFourState.cpp
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#include "LevelThreeState.h"
#include "LevelFourState.h"
#include "LevelFiveState.h"

LevelFourState::~LevelFourState() {
	// TODO Auto-generated destructor stub
}

LevelFourState::LevelFourState() : LevelState("level4") {
}

void LevelFourState::handle() {
	cout << "The country is at level4: There are quite a bit of cases, take all necessary precautions."<<endl;
}

LevelState * LevelFourState::changePandemicLevel(bool state) {
	if (state) {
		return new LevelFiveState();
	}
	else
		return new LevelThreeState();
}
