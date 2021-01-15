/*
 * LevelFiveState.cpp
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#include "LevelFourState.h"
#include "LevelFiveState.h"

LevelFiveState::~LevelFiveState() {
	// TODO Auto-generated destructor stub
}

LevelFiveState::LevelFiveState() : LevelState("level5") {
}

void LevelFiveState::handle() {
	cout << "The country is at level5: Don’t go outside unless you have to"<<endl;
}

LevelState * LevelFiveState::changePandemicLevel(bool state) {
	if (state) {
		return this;
	}
	else
		return new LevelFourState();
}
