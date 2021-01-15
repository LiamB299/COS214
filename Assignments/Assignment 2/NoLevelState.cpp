/*
 * NoLevelState.cpp
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#include "NoLevelState.h"
#include "LevelOneState.h"

NoLevelState::~NoLevelState() {
	// TODO Auto-generated destructor stub
}

NoLevelState::NoLevelState() : LevelState("none") {
}

void NoLevelState::handle() {
	cout << "The country is at no level: Normal Living\n";
}

LevelState * NoLevelState::changePandemicLevel(bool state) {
	if (state) {
		return new LevelOneState();
	}
	else
		return this;
}

