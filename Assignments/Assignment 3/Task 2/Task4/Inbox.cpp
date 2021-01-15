/*
 * Inbox.cpp
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#include "Inbox.h"

Inbox::Inbox(int maxMessages) {
	MaxMessages = maxMessages;
	NumMessages = 0;
	messages = new string[maxMessages];
}

Inbox::~Inbox() {
	delete [] messages;
}

void Inbox::save(string message) {
	if(NumMessages==MaxMessages)
		NumMessages =0;
	messages[NumMessages++] = message;
}

string Inbox::load(int index) {
	if(NumMessages==0)
		return "None";

	while(index<0) {
		cout << "Choose message [0 - " << NumMessages-1 <<"]" <<endl;
		cin >> index;
		if(index < 0 or index > (NumMessages - 1))
			return "Invalid";
	}
	return messages[index];
}

int Inbox::getNumMessages() {
	return NumMessages;
}
