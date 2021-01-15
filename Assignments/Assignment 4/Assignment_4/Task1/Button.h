/*
 * Button.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include "Command.h"

class Button {
private:
	Command *command;
public:
	Button(Command *c);
	virtual ~Button();

	void button_press();

};

#endif /* BUTTON_H_ */
