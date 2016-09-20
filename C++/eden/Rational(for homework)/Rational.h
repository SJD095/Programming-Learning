// Programming Challenge 2: Rational.h
#ifndef RATIONAL_H
#define RATIONAL_H
 
class Rational {
	public:
		Rational(int = 0, int = 1);  // default constructor
		Rational addition(Rational &);  // function addition
		Rational subtraction(Rational &);  // function subtraction
		Rational multiplication(Rational &);  // function multi.
		Rational division(Rational &);  // function division
		void printRational();  // print rational format
		void printRationalAsDouble();  // print rational as double format
	private:
		int numerator;  // integer numerator
		int denominator;  // integer denominator
		void reduction();  // utility function
		void tongfen(Rational &);
};  // end class Rational
 
#endif