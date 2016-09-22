#include <iostream>
#include <string>
#include <sstream>

#include "Arithmetic.h"

using namespace std;

template< typename T >
Arithmetic<T>::Arithmetic(T i, T j)
{
	a = i;
	b = j;
}

template< typename T >
T Arithmetic<T>::addition()
{
	return a + b;
}

template< typename T >
T Arithmetic<T>::subtraction()
{
	return a - b;
}

template< typename T >
T Arithmetic<T>::multiplication()
{
	return a * b;
}

template< typename T >
T Arithmetic<T>::division()
{
	return a / b;
}