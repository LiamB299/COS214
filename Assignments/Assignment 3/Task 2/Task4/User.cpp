/*
 * User.cpp
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#include "User.h"
#include "SocialSiteMediator.h"

User::User(SocialSiteMediator* mediator, string name) {
	username=name;
	this->mediator=mediator;
}

User::~User() {}

void User::changed(string message) {
	receiveMessage(message);
}

