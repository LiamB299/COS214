/*
 * LevelOneState.cpp
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#include "NoLevelState.h"
#include "LevelOneState.h"
#include "LevelTwoState.h"

LevelOneState::~LevelOneState() {
	// TODO Auto-generated destructor stub
}

LevelOneState::LevelOneState() : LevelState("level1") {
}

void LevelOneState::handle() {
	cout << "The country is at level1: Very few cases"<<endl;
}

LevelState * LevelOneState::changePandemicLevel(bool state) {
	if (state) {
		return new LevelTwoState();
	}
	else
		return new NoLevelState();
}

