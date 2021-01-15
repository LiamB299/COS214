/*
 * RemoteControlVehicle.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "RemoteControlVehicle.h"

RemoteControlVehicle::RemoteControlVehicle(RemoteControlVehicle* n) {
	on_state = false;
	next = n;
}

RemoteControlVehicle::~RemoteControlVehicle() {
}

void RemoteControlVehicle::flipState() {
	on_state = !on_state;
}

bool RemoteControlVehicle::getState() {
	return on_state;
}

void RemoteControlVehicle::setNext(RemoteControlVehicle *n) {
	next = n;
}

RemoteControlVehicle* RemoteControlVehicle::getNext() {
	return next;
}

void RemoteControlVehicle::handleRequest(string sline) {
	if(next)
		next->handleRequest(sline);
	else
		cout << "no handle for request" << endl;
}



