/*
 * Iterator.h
 *
 *  Created on: 14 Sep 2020
 *      Author: liam
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_

template<class T>
class DynamicArray;

template <class T>
class Iterator {
private:
	DynamicArray<T> *aggregate;
	int *index;
	T *value;
public:

	Iterator(DynamicArray<T> *aggr) {aggregate=aggr;};
	virtual ~Iterator() {};

	virtual void first()=0;
	virtual void next()=0;
	virtual bool hasNext()=0;
	virtual int current()=0;
	DynamicArray<T>* getAgg() {return aggregate;};
	void setIndex(int ind) {index=ind;};
	int getIndex() {return index;};
	void setVal(T v) {value=v;};
	T* getVal() {return value;};
	int getSize() {return aggregate->size;};

};

//template class Iterator<int>;

#endif /* ITERATOR_H_ */
