#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include "LinearStructure.h"
#include <string>

template<class T>
class Iterator;

template<class T>
class DynamicArray : public LinearStructure<T>
{
		friend class Iterator<T>;

		public:

		DynamicArray(int s);

		DynamicArray(const DynamicArray<T>& other);

		virtual DynamicArray<T>* clone();

		virtual ~DynamicArray();

		virtual void insert(int index, T element);

		virtual T remove(int index);

		virtual T get(int index) const;

		virtual bool isEmpty();

		Iterator<T>* createIterator();

		virtual void clear();

	private:

		void resize(int howMuch);

		T ** elements;

		int size;

		int numElements;
};

// This line gave me hell on earth :/
//#include "DynamicArray.cpp"

#endif


