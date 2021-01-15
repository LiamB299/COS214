/*
 * TurnOff.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef TURNOFF_H_
#define TURNOFF_H_

#include "Command.h"

class TurnOff : public Command {
public:
	TurnOff(RemoteControlVehicle *r);
	virtual ~TurnOff();

	void execute();
	void undo();
};

#endif /* TURNOFF_H_ */
