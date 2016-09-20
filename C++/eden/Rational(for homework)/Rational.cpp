// Debugging: Rational.cpp

#include <iostream>
#include "Rational.h"

using namespace std;

Rational::Rational(int j, int k)
{
	numerator = j;
	denominator = k;
	reduction();
}
Rational Rational::addition(Rational &R)
{
	tongfen(R);
	
	numerator += R.numerator;
	reduction();
	
	return *this;
}

Rational Rational::subtraction(Rational &R)
{
	tongfen(R);
	
	numerator -= R.numerator;
	reduction();
	
	return *this;
}
Rational Rational::multiplication(Rational &R)
{
	
	numerator *= R.numerator;
	denominator *= R.denominator;
	reduction();
	
	return *this;
}
Rational Rational::division(Rational &R)
{	
	numerator *= R.denominator;
	denominator *= R.numerator;
	reduction();
	
	return *this;
}
void Rational::printRational()
{
	cout << numerator << "/" << denominator;
}
void Rational::printRationalAsDouble()
{
	cout << static_cast<double>(numerator) / static_cast<double>(denominator);
}
void Rational::reduction()
{
	int larger = numerator > denominator ? numerator : denominator;
	int gcd = 1;
	
	for(int i = 1; i <= larger; i++)
	{
		if(numerator % i == 0 && denominator % i == 0)
		{
			gcd = i;
		}
	}
	
	numerator /= gcd;
	denominator /= gcd;
}

void Rational::tongfen(Rational &R)
{
	int i = 1, tmp = denominator;
	for(;denominator % R.denominator != 0; i++)
	{
		denominator += tmp;
	}
	
	numerator *= i;
	R.numerator *= denominator / R.denominator;
	R.denominator = denominator;
}