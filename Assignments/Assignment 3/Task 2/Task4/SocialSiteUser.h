/*
 * SocialSiteUser.h
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#ifndef SOCIALSITEUSER_H_
#define SOCIALSITEUSER_H_

#include "User.h"
#include "Inbox.h"
#include "OldStatus.h"

using namespace std;

class SocialSiteUser: public User {
private:
	string status;
	Inbox* myInbox;
	OldStatus* old;
public:
	SocialSiteUser(SocialSiteMediator* mediator, string name, int max=10);
	virtual ~SocialSiteUser();
	void changeStatus(string newStatus);
	string viewStatus();
	virtual void receiveMessage(string message);
	void postMessage(string message);
	void saveMessage(string message);
	void viewInbox();
	void saveStatus();
	void loadStatus(int i=-1);
};

#endif /* SOCIALSITEUSER_H_ */
