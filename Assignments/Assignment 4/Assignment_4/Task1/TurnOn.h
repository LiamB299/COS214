/*
 * TurnOn.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef TURNON_H_
#define TURNON_H_

#include "Command.h"

class TurnOn: public Command {
public:
	TurnOn(RemoteControlVehicle *r);
	virtual ~TurnOn();

	void execute();
	void undo();
};

#endif /* TURNON_H_ */
