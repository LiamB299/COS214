/*
 * MoveForward.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "MoveForward.h"

MoveForward::MoveForward(RemoteControlVehicle *r) : Command(r) {
}

MoveForward::~MoveForward() {
}

void MoveForward::execute() {
	getReceiver()->forward();
}

void MoveForward::undo() {
	getReceiver()->backward();
}
