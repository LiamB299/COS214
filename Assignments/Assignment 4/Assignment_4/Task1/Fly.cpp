/*
 * Fly.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "Fly.h"

Fly::Fly(RemoteControlVehicle *r) : Command(r) {

}

Fly::~Fly() {
}

void Fly::execute() {
	Command::getReceiver()->handleRequest("fly");
}

void Fly::undo() {
	Command::getReceiver()->handleRequest("fly_n");
}
