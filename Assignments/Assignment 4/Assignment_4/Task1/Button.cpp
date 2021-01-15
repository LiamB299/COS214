/*
 * Button.cpp
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#include "Button.h"

Button::Button(Command *c) {
	command =c;

}

Button::~Button() {
}

void Button::button_press() {
	command->execute();
}
