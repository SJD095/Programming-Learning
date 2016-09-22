#include <iostream>
#include "Complex.h"

using namespace std;


istream& operator>>(istream& in, Complex& c)
{
	auto tmp = in.get();
	string r, i;
	
	while(tmp != '+' && tmp != '-')
	{
		if(tmp == ' ')
		{
			tmp = in.get();
			continue;
		}
		
		if(tmp)
		
		r += tmp;
		tmp = in.get();
	}
	
	if(tmp == '+')
	{
		c.op = '+';
	}
	else
	{
		c.op = '-';
	}
	
	tmp = in.get();
	while(tmp != 'i')
	{
		if(tmp == ' ')
		{
			tmp = in.get();
			continue;
		}
		
		i += tmp;
		tmp = in.get();
	}
	
	c.real = atoi(r.c_str());
	c.imaginary = atoi(i.c_str());
	
	return in;
}

ostream& operator<<(ostream& out, Complex& c)
{
	out << c.real << c.op << c.imaginary << 'i' << endl;
	return out;
}

bool Complex::fail()
{
	return judge;
}