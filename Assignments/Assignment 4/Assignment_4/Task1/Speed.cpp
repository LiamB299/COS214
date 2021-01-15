/*
 * Speed.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "Speed.h"

Speed::Speed(RemoteControlVehicle *r) : Command(r) {
}

Speed::~Speed() {
}

void Speed::execute() {
	Command::getReceiver()->handleRequest("speed");
}

void Speed::undo() {
	Command::getReceiver()->handleRequest("speed_n");
}
