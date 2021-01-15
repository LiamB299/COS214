/*
 * NoLevelState.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef NOLEVELSTATE_H_
#define NOLEVELSTATE_H_
#include "LevelState.h"

class NoLevelState : public LevelState {
public:
	void handle();
	LevelState * changePandemicLevel(bool);
	NoLevelState();
	virtual ~NoLevelState();
};

#endif /* NOLEVELSTATE_H_ */
