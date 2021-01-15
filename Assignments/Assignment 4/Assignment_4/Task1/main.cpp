/*
 * main.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "Button.h"
#include "RemoteControlPlane.h"
#include "RemoteControlCar.h"

#include "RemoteControlRocket.h"
#include "RocketAdaptor.h"

#include "Fly.h"
#include "Speed.h"

#include "MoveBackward.h"
#include "MoveForward.h"
#include "TurnOn.h"
#include "TurnOff.h"

int main() {

	RemoteControlVehicle *car = new  RemoteControlCar();
	RemoteControlVehicle *plane = new  RemoteControlPlane();


	// car
	Command *cm1 = new MoveForward(car);
	Command *cm12 = new MoveBackward(car);
	Command *cm13 = new TurnOff(car);
	Command *cm2 = new TurnOn(car);

	Button B_car_for(cm1);
	Button B_car_bc(cm12);
	Button B_car_off(cm13);
	Button B_car_on(cm2);


	// car is off
	B_car_for.button_press();

	// turn on
	B_car_on.button_press();

	// forward
	B_car_for.button_press();

	// backward
	B_car_bc.button_press();

	// turn off
	B_car_off.button_press();

	// turn off
	B_car_off.button_press();

	cout << endl;


	// plane
	Command *cm3 = new MoveForward(plane);
	Button B_plane_for(cm3);

	Command *cm4 = new TurnOn(plane);
	Button B_plane_on(cm4);

	// plane is off
	B_plane_for.button_press();

	// turn on
	B_plane_on.button_press();

	// forward
	B_plane_for.button_press();


	cout << endl;

	//================================

	// adaptor

	RemoteControlRocket *rk = new RemoteControlRocket;
	RocketAdaptor *ra = new RocketAdaptor(rk);

	ra->on();
	ra->forward();
	ra->backward();
	ra->off();

	cout << endl;

	Command *rockOn = new TurnOn(ra);
	Command *rockOff = new TurnOff(ra);
	Command *rockUp = new MoveForward(ra);



	Button b_rock_on(rockOn);
	Button b_rock_off(rockOff);
	Button B_rock_thUP(rockUp);

	B_rock_thUP.button_press();
	b_rock_on.button_press();
	B_rock_thUP.button_press();
	b_rock_off.button_press();

	//================================

	// chain of command

	cout << endl;

	RemoteControlVehicle *plane1 = new RemoteControlPlane(nullptr);
	RemoteControlVehicle *car1 = new RemoteControlCar(plane1);
	RemoteControlVehicle *plane2 = new RemoteControlPlane(car1);

	Command *on = new TurnOn(plane1);
	Command *on2 = new TurnOn(car1);
	Command *on3 = new TurnOn(plane2);

	Button Bon1(on);
	Button Bon2(on2);
	Button Bon3(on3);

	Bon1.button_press();
	Bon2.button_press();
	Bon3.button_press();

	cout << endl;

	Command *fly = new Fly(car1);
	Command *spoed = new Speed(plane2);

	Button *BSpeed = new Button(spoed);
	Button *Bfly = new Button(fly);

	BSpeed->button_press();
	Bfly->button_press();

	//================================
	delete plane1;
	delete car1;
	delete plane2;
	delete fly;
	delete spoed;
	delete BSpeed;
	delete Bfly;
	delete on;
	delete on2;
	delete on3;


	//================================
	delete rockOn;
	delete rockOff;
	delete rockUp;
	delete rk;
	delete ra;


	//================================
	delete car;
	delete plane;

	delete cm1;
	delete cm12;
	delete cm13;
	delete cm2;
	delete cm3;
	delete cm4;

	return 0;
}

