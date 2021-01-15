/*
 * Inbox.h
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#ifndef INBOX_H_
#define INBOX_H_
#include <string>
#include <iostream>
using namespace std;

// inbox is a fifo queue

class Inbox {
private:
	int NumMessages;
	int MaxMessages;
	string* messages;
public:
	Inbox(int maxMessages);
	virtual ~Inbox();
	void save(string message);
	string load(int index);
	int getNumMessages();
};

#endif /* INBOX_H_ */
