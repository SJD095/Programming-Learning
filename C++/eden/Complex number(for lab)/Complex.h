#ifndef Complex_H
#define Complex_H
 
#include <string>

using namespace std;
 
class Complex {
	public:
		Complex(double real, double imaginary);
		Complex();
		void printComplex();
		Complex add( const Complex &right);
		Complex subtract( const Complex &right);
		void setComplexNumber( double rp, double ip);
	private:
		double realPart = 0;
		double imaginaryPart = 0;
};
 
#endif