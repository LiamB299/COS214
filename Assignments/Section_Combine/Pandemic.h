/*
 * Pandemic.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef PANDEMIC_H_
#define PANDEMIC_H_

#include "LevelState.h"
#include "PandemicStrategy.h"
#include <iostream>
#include <string>
using namespace std;



class Pandemic {
private:
	string name;
	LevelState *state;
	PandemicStrategy *strat;
public:
	Pandemic();
	Pandemic(string nm) {name = nm;};
	virtual ~Pandemic();
	void increaseLevel();
	void decreaseLevel();
	void takeAction();
	void init_Pandemic(int level); // [0, 5]
};

#endif /* PANDEMIC_H_ */
