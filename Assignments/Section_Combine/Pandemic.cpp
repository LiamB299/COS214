/*
 * Pandemic.cpp
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#include "Pandemic.h"
#include "levelFiveStrategy.h"
#include "levelFourStrategy.h"
#include "levelThreeStrategy.h"
#include "levelTwoStrategy.h"
#include "levelOneStrategy.h"

#include "NoLevelState.h"
#include "LevelOneState.h"
#include "LevelTwoState.h"
#include "LevelThreeState.h"
#include "LevelFourState.h"
#include "LevelFiveState.h"

Pandemic::Pandemic() {
	state = 0;
	strat = 0;
	name ="";
	// TODO Auto-generated constructor stub

}

Pandemic::~Pandemic() {
	delete state;
}

void Pandemic::increaseLevel() {
	if(state->getPandemicState()=="level5") {
		cout << "Already in highest state and strategy\n";
		//state->handle();
		//strat->takeAction();
		return;
			}
	else {
			LevelState *s = state;
			state = state->changePandemicLevel(true);
			state->handle();
			delete s;

			delete strat;
			if(state->getPandemicState()=="level5")
				strat = new levelFiveStrategy();
			else if(state->getPandemicState()=="level4")
				strat = new levelFourStrategy();
			else if(state->getPandemicState()=="level3")
				strat = new levelThreeStrategy();
			else if(state->getPandemicState()=="level2")
				strat = new levelTwoStrategy();
			else if(state->getPandemicState()=="level1")
				strat = new levelOneStrategy();
			else
				strat = 0;

			takeAction();

		}
}

void Pandemic::decreaseLevel() {
	if(state->getPandemicState()=="none") {
			cout << "Already in lowest state and strategy\n";
			//state->handle();
			//strat->takeAction();
			return;
		}
	else {
		LevelState *s = state;
		state = state->changePandemicLevel(false);
		state->handle();
		delete s;
	}

	delete strat;
	if(state->getPandemicState()=="level5")
		strat = new levelFiveStrategy();
	else if(state->getPandemicState()=="level4")
		strat = new levelFourStrategy();
	else if(state->getPandemicState()=="level3")
		strat = new levelThreeStrategy();
	else if(state->getPandemicState()=="level2")
		strat = new levelTwoStrategy();
	else if(state->getPandemicState()=="level1")
		strat = new levelOneStrategy();
	else
		strat = 0;

	takeAction();
}

void Pandemic::takeAction() {
	if (strat==0) {
		cout << "NO STRATEGY\n";
		return;
	}
	cout << name << strat->takeAction();
}


void Pandemic::init_Pandemic(int level) {
	switch (level) {
	case 0 :
			state = new NoLevelState();
			state->handle();
			strat = 0;
			break;
	case 1 :
			state = new LevelOneState();
			state->handle();
			strat = new levelOneStrategy();
			break;
	case 2 :
			state = new LevelTwoState();
			state->handle();
			strat = new levelTwoStrategy();
			break;
	case 3 :
			state = new LevelThreeState();
			state->handle();
			strat = new levelThreeStrategy();
			break;
	case 4 :
			state = new LevelFourState();
			state->handle();
			strat = new levelFourStrategy();
			break;
	case 5 :
			state = new LevelFiveState();
			state->handle();
			strat = new levelFiveStrategy();
			break;
	}
}
