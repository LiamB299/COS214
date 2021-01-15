/*
 * SocialSiteUser.cpp
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#include "SocialSiteUser.h"
#include "SocialSiteMediator.h"

SocialSiteUser::SocialSiteUser(SocialSiteMediator* mediator, string name, int max) : User(mediator, name) {
	old = new OldStatus(max);
	myInbox = new Inbox(max);
	status = "I am using SocialSite";
}

SocialSiteUser::~SocialSiteUser() {
	delete old;
	old = nullptr;
	delete myInbox;
	myInbox = nullptr;
}

void SocialSiteUser::changeStatus(string newStatus) {
	//old->save(status);
	status = newStatus;
	string mess = this->getName() +" has changed status to: "+ status;
	getMed()->notify(this, mess);
}

string SocialSiteUser::viewStatus() {
	return status;
}

void SocialSiteUser::receiveMessage(string message) {
	cout << this->username << " received: " << message << endl;
	saveMessage(message);
}

void SocialSiteUser::postMessage(string message) {
	message = this->getName() +" sent: " + message;
	getMed()->notify(this, message);
}

void SocialSiteUser::saveMessage(string message) {
	myInbox->save(message);
}

void SocialSiteUser::viewInbox() {
	if(myInbox->getNumMessages()==0) {
		cout << "Inbox empty" << endl;
		return;
	}

	for(int i=0; i<myInbox->getNumMessages(); i++) {
		cout << myInbox->load(i) << endl;
	}
}

void SocialSiteUser::saveStatus() {
	old->save(status);
}

void SocialSiteUser::loadStatus(int i) {
	if(old->getNumStatus()==0) {
		cout << "None" <<endl;
		return;
	}
	status = old->load(i);
	string mess = this->getName() +" has changed status to: "+ status;
	getMed()->notify(this, mess);
}
