/*
 * RemoteControlPlane.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "RemoteControlPlane.h"

RemoteControlPlane::RemoteControlPlane(RemoteControlVehicle *n) : RemoteControlVehicle(n) {
}

RemoteControlPlane::~RemoteControlPlane() {
}

void RemoteControlPlane::on() {
	if(getState()==false) {
		flipState();
		cout << "RC plane is turned on" << endl;
	}
	else
		cout << "RC plane is already on" << endl;
}

void RemoteControlPlane::off() {
	if(getState()==true) {
		flipState();
		cout << "RC plane is turned off" << endl;
	}
	else
		cout << "RC plane is already off" << endl;
}

void RemoteControlPlane::forward() {
	if(getState()==true)
		cout << "RC plane pulls up into a vertical climb" << endl ;
	else
		cout << "RC plane is turned off, cannot move forward" << endl;
}

void RemoteControlPlane::backward() {
	if(getState()==true)
		cout << "RC plane points its nose down into a dive" << endl ;
	else
		cout << "RC plane is turned off, cannot move backwards" << endl;
}

void RemoteControlPlane::handleRequest(string sline) {
	if(strcmp("fly", sline.c_str())==0) {
		if(getState()==false)
			cout << "Plane is off" << endl;
		cout << "The fly button is pressed" << endl;
	}
	else if(strcmp("fly_n", sline.c_str())==0) {
		if(getState()==false)
			cout << "Plane is off" << endl;
		cout << "The land button is pressed" << endl;
	}
	else
		if(getNext())
			getNext()->handleRequest(sline);
		else
			cout << "handler unable to process request" <<endl;
}

