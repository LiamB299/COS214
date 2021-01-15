/*
 * Fly.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef TASK1_FLY_H_
#define TASK1_FLY_H_

#include "Command.h"

class Fly: public Command {
public:
	Fly(RemoteControlVehicle *r);
	virtual ~Fly();

	void execute();
	void undo();

	RemoteControlVehicle* getReceiver();
};

#endif /* TASK1_FLY_H_ */
