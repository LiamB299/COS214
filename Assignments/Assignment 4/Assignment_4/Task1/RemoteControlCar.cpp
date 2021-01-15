/*
 * RemoteControlCar.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "RemoteControlCar.h"

RemoteControlCar::RemoteControlCar(RemoteControlVehicle *n) : RemoteControlVehicle(n) {
}

RemoteControlCar::~RemoteControlCar() {
}

void RemoteControlCar::on() {
	if(getState()==false) {
		flipState();
		cout << "RC car is turned on" << endl;
	}
	else
		cout << "RC car is already on" << endl;
}

void RemoteControlCar::off() {
	if(getState()==true) {
		flipState();
		cout << "RC car is turned off" << endl;
	}
	else
		cout << "RC car is already off" << endl;
}

void RemoteControlCar::forward() {
	if(getState()==true)
		cout << "RC car drives forward quickly" << endl ;
	else
		cout << "RC car is turned off, cannot move forward" << endl;
}

void RemoteControlCar::backward() {
	if(getState()==true)
		cout << "RC car can reverse backward carefully" << endl ;
	else
		cout << "RC car is turned off, cannot move backwards" << endl;
}

void RemoteControlCar::handleRequest(string sline) {
	if(strcmp("speed", sline.c_str())==0) {
		if(getState()==false)
			cout << "Plane is off" << endl;
		cout << "The land vehicle speeds up" << endl;
	}
	else if(strcmp("speed_n", sline.c_str())==0) {
		if(getState()==false)
			cout << "Plane is off" << endl;
		cout << "The land vehicle slows down" << endl;
	}
	else
		if(getNext())
			getNext()->handleRequest(sline);
		else
			cout << "handler unable to process request" <<endl;

}
