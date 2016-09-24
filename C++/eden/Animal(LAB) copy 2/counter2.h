#ifndef COUNTER2_H
#define COUNTER2_H

#include <iostream>

using namespace std;

class counter2
{
	public:
		counter2():x(0)
		{
			
		}
		
		counter2(counter2 & other) : x(other.x)
		{
			
		}
		
		int operator++()
		{
			++x;
			return x;
		}
		
		int operator--()
		{
			--x;
			return x;
		}
		
		int operator++(int)
		{
			int tmp = x;
			++x;
			return tmp;
		}
		
		int operator--(int)
		{
			int tmp = x;
			--x;
			return tmp;
		}
		
		void set(int data)
		{
			x = data;
		}
		
		void reset()
		{
			x = 0;
		}
		
		int show()
		{
			return x;
		}
	
	private:
		int x;
};

#endif