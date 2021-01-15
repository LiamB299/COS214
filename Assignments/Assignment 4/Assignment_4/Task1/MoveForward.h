/*
 * MoveForward.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef MOVEFORWARD_H_
#define MOVEFORWARD_H_

#include "Command.h"

class MoveForward: public Command {
public:
	MoveForward(RemoteControlVehicle *r);
	virtual ~MoveForward();

	void execute();
	void undo();

};

#endif /* MOVEFORWARD_H_ */
