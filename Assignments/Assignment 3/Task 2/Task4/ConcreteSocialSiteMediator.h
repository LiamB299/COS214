/*
 * ConcreteSocialSiteMediator.h
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#ifndef CONCRETESOCIALSITEMEDIATOR_H_
#define CONCRETESOCIALSITEMEDIATOR_H_

#include "SocialSiteMediator.h"

class ConcreteSocialSiteMediator: public SocialSiteMediator {
private:
	User** users;
	int numusers;
	void delete_users();
public:
	ConcreteSocialSiteMediator();
	virtual ~ConcreteSocialSiteMediator();
	virtual bool addUser(string username);
	virtual void notify(User* username, string message);
	User* getUser(string name);
};

#endif /* CONCRETESOCIALSITEMEDIATOR_H_ */
