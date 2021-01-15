/*
 * LevelTwoState.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELTWOSTATE_H_
#define LEVELTWOSTATE_H_
#include "LevelState.h"


class LevelTwoState : public LevelState{
public:
	void handle();
	LevelState * changePandemicLevel(bool);
	LevelTwoState();
	virtual ~LevelTwoState();
};

#endif /* LEVELTWOSTATE_H_ */
