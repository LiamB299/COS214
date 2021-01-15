/*
 * Command.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "Command.h"

Command::Command(RemoteControlVehicle *r) {
	receiver = r;
}

Command::~Command() {
}

RemoteControlVehicle* Command::getReceiver() {
	return receiver;
}
