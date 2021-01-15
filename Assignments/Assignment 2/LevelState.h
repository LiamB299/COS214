/*
 * LevelState.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELSTATE_H_
#define LEVELSTATE_H_

#include <string>
#include <iostream>

using namespace std;

// State participant
class LevelState {
private:
	string pandemicLevel="";
public:
	virtual void handle()=0;
	virtual LevelState * changePandemicLevel(bool state)=0;
	string getPandemicState() {return pandemicLevel;};
	LevelState();
	LevelState(string level) { pandemicLevel = level;};
	virtual ~LevelState();
};

#endif /* LEVELSTATE_H_ */
