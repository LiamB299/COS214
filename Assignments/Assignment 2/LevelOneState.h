/*
 * LevelOneState.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELONESTATE_H_
#define LEVELONESTATE_H_
#include "LevelState.h"


class LevelOneState : public LevelState{
public:
	void handle();
	LevelState * changePandemicLevel(bool);
	LevelOneState();
	virtual ~LevelOneState();
};

#endif /* LEVELONESTATE_H_ */
