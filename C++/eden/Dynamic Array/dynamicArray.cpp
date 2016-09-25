#include <iostream>
#include <set>
#include "dynamicArray.h"

using namespace std;

void dynamic_array::grow()
{
	_size *= 2;
	auto tmp = _data;
	_data = new int[_size];
	
	for(int i = 0; i < _size / 2; i++)
	{
		_data[i] = tmp[i];
	}
	
	delete []tmp;
}
		
dynamic_array::dynamic_array(const unsigned & size, const int & init)
{
	_data = new int[size];
	
	for(int i = 0; i < size; i++)
	{
		_data[i] = init;
	}
	_size = size;
}

dynamic_array::dynamic_array(const int * arr, const unsigned & size)
{
	_size = size;
	_data = new int[_size];
	
	for(int i = 0; i < size; i++)
	{
		_data[i] = arr[i];
	}
}

dynamic_array::dynamic_array(const vector<int> & vec)
{
	_size = vec.size();
	_data = new int[_size];
	
	for(int i = 0; i < _size; i++)
	{
		_data[i] = vec[i];
	}
}

dynamic_array::dynamic_array(const dynamic_array & other)
{
	_size = other._size;
	_data = new int[_size];
	
	for(int i = 0; i < _size; i++)
	{
		_data[i] = other._data[i];
	}
}

dynamic_array::~dynamic_array()
{
	delete []_data;
}

int dynamic_array::getSize() const
{
	return _size;		
}

int & dynamic_array::operator[](const unsigned & pos)
{
	while(pos > _size - 1)
	{
		grow();
	}
	return _data[pos];
}

int dynamic_array::operator[](const unsigned & pos) const
{
	return _data[pos];
}

ostream & operator<<(ostream & out, const dynamic_array & d)
{
	for(int i = 0; i < d._size; i++)
	{
		out << d._data[i] << ' ';
	}
	out << endl;
	
	return out;
}