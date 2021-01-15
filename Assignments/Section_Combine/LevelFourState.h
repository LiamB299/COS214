/*
 * LevelFourState.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELFOURSTATE_H_
#define LEVELFOURSTATE_H_
#include "LevelState.h"


class LevelFourState : public LevelState{
public:
	void handle();
	LevelState * changePandemicLevel(bool);
	LevelFourState();
	virtual ~LevelFourState();
};

#endif /* LEVELFOURSTATE_H_ */
