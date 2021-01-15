#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
class Human
{

	public:

		Human(char value, int x, int y);
		virtual ~Human();

		void setValue(char value);
		virtual void setX(int x);
		virtual void setY(int y);

		char getValue();
		int getX();
		int getY();

	private:

		char mValue;
		int mX;
		int mY;

};

#endif
