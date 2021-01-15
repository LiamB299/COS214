/*
 * LevelThreeState.cpp
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#include "LevelTwoState.h"
#include "LevelThreeState.h"
#include "LevelFourState.h"

LevelThreeState::~LevelThreeState() {
	// TODO Auto-generated destructor stub
}

LevelThreeState::LevelThreeState() : LevelState("level3") {
}

void LevelThreeState::handle() {
	cout << "The country is at level3:Moderate amount of cases, make sure you are wearing a mask"<<endl;
}

LevelState * LevelThreeState::changePandemicLevel(bool state) {
	if (state) {
		return new LevelFourState();
	}
	else
		return new LevelTwoState();
}


