/*
 * RemoteAdapter.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "RocketAdaptor.h"

RocketAdaptor::RocketAdaptor(RemoteControlRocket *ada) {
	adaptee = ada;
}

RocketAdaptor::~RocketAdaptor() {
}

void RocketAdaptor::on() {
	if(getState()==false) {
		flipState();
		adaptee->takeOff();
	}
	else
		cout << "Rocket is already turned on" << endl;

}

void RocketAdaptor::off() {
	if(getState()==false) {
		flipState();
		adaptee->stopLaunch();
	}
	else
		cout << "Rocket is already turned off" << endl;
}

void RocketAdaptor::forward() {
	if(getState()==true) {
		flipState();
		adaptee->increaseThrottle();
	}
	else
		cout << "Rocket is off, turn on to go forward" << endl;
}

void RocketAdaptor::backward() {
	if(getState()==true) {
		flipState();
		adaptee->decreaseThrottle();
	}
	else
		cout << "Rocket is off, turn on to go backwards" << endl;
}

void RocketAdaptor::handleRequest() {

}
