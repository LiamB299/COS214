/*
 * DynamicIterator.cpp
 *
 *  Created on: 14 Sep 2020
 *      Author: liam
 */

#include "DynamicArray.h"
#include "DynamicIterator.h"

template<class T>
Dynamic_Iterator<T>::Dynamic_Iterator(DynamicArray<T> *aggr) : Iterator<T>(aggr)  {
	index = -1;
	value = -1;
	first();
}

template<class T>
Dynamic_Iterator<T>::~Dynamic_Iterator() {
	// TODO Auto-generated destructor stub
}

template<class T>
void Dynamic_Iterator<T>::first() {
	if(Iterator<T>::getAgg()->isEmpty()==true)
		return;
	index = 0;
	value = Iterator<T>::getAgg()->get(0);
}

template<class T>
void Dynamic_Iterator<T>::next() {
	if(Iterator<T>::getAgg()->isEmpty()==true || this->hasNext()==false)
		return;
	index++;
	value = Iterator<T>::getAgg()->get(index);
}

template<class T>
bool Dynamic_Iterator<T>::hasNext() {
	if((index+1)==Iterator<T>::getSize()) {
		return false;
	}
	else
		return true;
}

template<class T>
int Dynamic_Iterator<T>::current() {
	return value;
}

template class Dynamic_Iterator<int>;
