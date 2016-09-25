#ifndef VIRTUALBASE_H
#define VIRTUALBASE_H

#include <iostream>

using namespace std;

class VirtualBase
{
	public:
		virtual int getValue() = 0;
		virtual void setValue(int) = 0;
};

#endif