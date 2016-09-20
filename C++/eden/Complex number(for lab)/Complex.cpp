#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex( double real, double imaginary)
{
	setComplexNumber( real, imaginary);
}

Complex::Complex()
{
	
}

Complex Complex::add( const Complex &right)
{
	realPart += right.realPart;
	imaginaryPart += right.imaginaryPart;
	return *this;
}

Complex Complex::subtract( const Complex &right)
{
	realPart -= right.realPart;
	imaginaryPart -= right.imaginaryPart;
	return *this;
}

void Complex::printComplex()
{
	cout << '(' << realPart << ", " << imaginaryPart << ')';
}

void Complex::setComplexNumber( double rp, double ip )
{
	realPart = rp;
	imaginaryPart = ip;
}