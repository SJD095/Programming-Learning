#include <iostream>

using namespace std;

template<typename T> bool cmp(T &a, T &b)
{
	return a > b;		
}

template<typename T> bool cmp(T *a, T *b)
{
	return *a > *b;		
}