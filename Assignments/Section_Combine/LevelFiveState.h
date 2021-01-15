/*
 * LevelFiveState.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELFIVESTATE_H_
#define LEVELFIVESTATE_H_
#include "LevelState.h"


class LevelFiveState : public LevelState{
public:
	void handle();
	LevelState * changePandemicLevel(bool);
	LevelFiveState();
	virtual ~LevelFiveState();
};

#endif /* LEVELFIVESTATE_H_ */
