/*
 * LevelThreeState.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELTHREESTATE_H_
#define LEVELTHREESTATE_H_
#include "LevelState.h"


class LevelThreeState : public LevelState{
public:
	void handle();
	LevelState * changePandemicLevel(bool);
	LevelThreeState();
	virtual ~LevelThreeState();
};

#endif /* LEVELTHREESTATE_H_ */
