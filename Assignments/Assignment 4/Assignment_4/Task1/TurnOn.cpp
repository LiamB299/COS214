/*
 * TurnOn.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "TurnOn.h"

TurnOn::TurnOn(RemoteControlVehicle *r) : Command(r){
}

TurnOn::~TurnOn() {
	// TODO Auto-generated destructor stub
}

void TurnOn::execute() {
	getReceiver()->on();
}

void TurnOn::undo() {
	getReceiver()->off();
}
