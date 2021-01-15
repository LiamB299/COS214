/*
 * MoveBackward.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "MoveBackward.h"

MoveBackward::MoveBackward(RemoteControlVehicle *r) : Command(r) {
}

MoveBackward::~MoveBackward() {
	// TODO Auto-generated destructor stub
}

void MoveBackward::execute() {
	getReceiver()->backward();
}

void MoveBackward::undo() {
	getReceiver()->forward();
}
