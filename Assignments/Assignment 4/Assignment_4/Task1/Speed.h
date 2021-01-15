/*
 * Speed.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef TASK1_SPEED_H_
#define TASK1_SPEED_H_

#include "Command.h"

class Speed: public Command {
public:
	Speed(RemoteControlVehicle *r);
	virtual ~Speed();

	void execute();
	void undo();

	RemoteControlVehicle* getReceiver();
};

#endif /* TASK1_SPEED_H_ */
