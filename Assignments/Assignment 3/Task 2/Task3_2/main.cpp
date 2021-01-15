/*
 * main.cpp
 *
 *  Created on: 14 Sep 2020
 *      Author: liam
 */

#include "DynamicArray.h"
#include "DynamicIterator.h"

int main() {
	int val;
	DynamicArray<int> Dyn(20);
	Iterator<int> *iter = Dyn.createIterator();
	Iterator<int> *iter2 = Dyn.createIterator();


	for(int x=0; x<20; x++)
		Dyn.insert(x, x);

	iter->first();
	for(int x=0; x<30; x++) {
		val = iter->current();
		iter->next();
		cout << val << endl;
		if(iter->hasNext()==false)
			break;
	}
	val = iter->current();
	iter->next();
	cout << val << endl;

//====================================================
// Two iterators showing concurrent access to array
	iter->first();
	iter->next();
	iter->next();
	iter->next();

	iter2->first();
	iter2->current();

	cout << "Iterator one value:" << iter->current() << endl;
	cout << "Iterator two value:" << iter2->current() << endl;



	delete iter;
	delete iter2;

	return 0;
}
