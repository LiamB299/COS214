/*
 * User.h
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#ifndef USER_H_
#define USER_H_
class SocialSiteMediator;
#include <string>
#include <iostream>
using namespace std;

class User {
protected:
	SocialSiteMediator *mediator;
	string username;
public:
	User(SocialSiteMediator* mediator, string name);
	virtual ~User();
	void changed(string message);
	string getName() {return username;};
	virtual void receiveMessage(string)=0;
	SocialSiteMediator * getMed() {return mediator;};
};

#endif /* USER_H_ */
