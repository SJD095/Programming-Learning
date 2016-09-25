#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
#include "VirtualBase.h"

using namespace std;

class Derived: public VirtualBase
{
	public:
		virtual int getValue()
		{
			return value;
		}
		
		void setValue(int ret)
		{
			value = ret;
		}
		
		void printValue() const
		{
			cout << "Derived::printValue(): value is " << value << endl;
		}
	
	private:
		int value;
};

#endif