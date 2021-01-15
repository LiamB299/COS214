/*
 * ConcreteSocialSiteMediator.cpp
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#include "ConcreteSocialSiteMediator.h"
#include "SocialSiteUser.h"

ConcreteSocialSiteMediator::ConcreteSocialSiteMediator() {
	numusers = 0;
	users = nullptr;
}

ConcreteSocialSiteMediator::~ConcreteSocialSiteMediator() {
	delete_users();
}

void ConcreteSocialSiteMediator::delete_users() {
	if (users!=nullptr) {
			for(int i=0; i<numusers; i++)
				delete users[i];
			delete [] users;
			users=nullptr;
		}
}

User* ConcreteSocialSiteMediator::getUser(string name) {
	for(int i=0; i<numusers; i++) {
		if(users[i]->getName()==name)
			return users[i];
	}
	return nullptr;
}

bool ConcreteSocialSiteMediator::addUser(string username) {
	if(getUser(username)!=nullptr)
		return false;
	User**u;
	u = new User*[1+numusers];
	for(int i=0; i<numusers; i++)
		u[i] = users[i];
	u[numusers] = new SocialSiteUser(this, username);
	numusers++;
	users = u;
	return true;
}

void ConcreteSocialSiteMediator::notify(User* username, string message) {
	for(int i=0; i<numusers; i++) {
		if(users[i]==username)
			continue;
		users[i]->changed(message);
	}
}
