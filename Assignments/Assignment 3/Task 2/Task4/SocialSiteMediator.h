/*
 * SocialSiteMediator.h
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#ifndef SOCIALSITEMEDIATOR_H_
#define SOCIALSITEMEDIATOR_H_
#include <string>
class User;
using namespace std;

class SocialSiteMediator {
public:
	SocialSiteMediator();
	virtual ~SocialSiteMediator();
	virtual void notify(User*, string message) = 0;
	virtual bool addUser(string username) = 0;
};

#endif /* SOCIALSITEMEDIATOR_H_ */
