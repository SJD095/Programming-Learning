#include "derived.h"

using namespace std;

Derived::Derived(const int * arr, int _size, int _value):Base(_value)
{
	size = _size;
	data = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		data[i] = arr[i];
	}
}

Derived::Derived(const Derived& d):Base(d)
{
	size = d.size;
	data = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		data[i] = d.data[i];
	}
}

Derived& Derived::operator=(const Derived& d)
{
	size = d.size;
	auto tmp = data;
	data = new int[size];
	
	Base::operator=(d);
	
	for(int i = 0; i < size; i++)
	{
		data[i] = d.data[i];
	}
	
	delete []tmp;
}
Derived::~Derived()
{
	delete []data;
}