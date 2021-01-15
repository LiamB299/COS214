/*
 * Command.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef COMMAND_H_
#define COMMAND_H_

#include "RemoteControlVehicle.h"

class Command {
private:
	RemoteControlVehicle *receiver;

public:

	Command(RemoteControlVehicle *r);
	virtual ~Command();

	virtual void execute()=0;
	virtual void undo()=0;

	RemoteControlVehicle* getReceiver();

};

#endif /* COMMAND_H_ */
