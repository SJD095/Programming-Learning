#include <iostream>
#include "Arithmetic.h"
#include "Arithmetic.cpp"

using namespace std;

template< typename T >
void printResult(T number) {
	cout << "The result of the operation is: " << number << endl;
}

int main() {
	Arithmetic<int> a(5, 3);
	Arithmetic<double> b(7.3, 5.2);
 
	cout << "Arithmetic performed on object a:\n";
	printResult(a.addition());
	printResult(a.subtraction());
	printResult(a.multiplication());
	printResult(a.division());
 
	cout << "\nArithmetic performed on object b:\n";
	printResult(b.addition());
	printResult(b.subtraction());
	printResult(b.multiplication());
	printResult(b.division());
}
 