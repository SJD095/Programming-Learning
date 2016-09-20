//CalcTest.cpp

#include <iostream>
#include "CalcTest.h"

using namespace std;

SimpleCalculator::SimpleCalculator()
{
	answer = 0;
}

void SimpleCalculatoradd(double a, double b)
{
	answer = a + b;
}

void SimpleCalculatorsubtract(double a, double b)
{
	answer = a - b
}

void SimpleCalculatormultiply(double a, double b)
{
	answer = a - b;
}

void SimpleCalculatordivide(double a, double b)
{
	answer = a / b;
}

double SimpleCalculatorgetAnswer() const
{
	return answer;
}