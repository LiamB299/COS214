/*
 * MoveBackward.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef MOVEBACKWARD_H_
#define MOVEBACKWARD_H_

#include "Command.h"

class MoveBackward: public Command {
public:
	MoveBackward(RemoteControlVehicle *r);
	virtual ~MoveBackward();

	void execute();
	void undo();
};

#endif /* MOVEBACKWARD_H_ */
