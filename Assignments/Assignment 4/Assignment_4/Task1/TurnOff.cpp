/*
 * TurnOff.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "TurnOff.h"

TurnOff::TurnOff(RemoteControlVehicle *r) : Command(r) {
}

TurnOff::~TurnOff() {
	// TODO Auto-generated destructor stub
}

void TurnOff::execute() {
	getReceiver()->off();
}

void TurnOff::undo() {
	getReceiver()->on();
}
