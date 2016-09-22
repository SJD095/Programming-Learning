#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Complex
{
	public:
		friend istream& operator>>(istream&, Complex&);
		friend ostream& operator<<(ostream&, Complex&);
		bool fail();
		
	private:
		int real = 0;
		int imaginary = 0;
		bool judge = true;
		string op = "+";
};

#endif