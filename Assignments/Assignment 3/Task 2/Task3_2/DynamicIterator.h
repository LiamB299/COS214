/*
 * DynamicIterator.h
 *
 *  Created on: 14 Sep 2020
 *      Author: liam
 */

#ifndef DYNAMICITERATOR_H_
#define DYNAMICITERATOR_H_

#include "Iterator.h"

template<class T>
class DynamicArray;

template <class T>
class Dynamic_Iterator: public Iterator<T> {
private:
	int value;
	int index;
public:

	Dynamic_Iterator(DynamicArray<T> *aggr);
	virtual ~Dynamic_Iterator();
	virtual void first();
	virtual void next();
	virtual bool hasNext();
	virtual int current();

};

//#include "DynamicIterator.cpp"

#endif /* DYNAMICITERATOR_H_ */
