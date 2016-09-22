#include <iostream>
#include "array.h"

using namespace std;

template<typename T>
SortableArray<T>::SortableArray(int s):maxSize(s)
{
	array = new T[maxSize];
	size = 0;
}

template<typename T>
SortableArray<T>::~SortableArray()
{
	delete []array;
}

template<typename T>
void SortableArray<T>::pushBack(T a)
{
	if(size == maxSize)
	{
		cout << "Already full!" << endl;
		return;
	}
	
	array[size] = a;
	size++;
}

template<typename T>
void SortableArray<T>::sort()
{
	for(int t = size - 1; t > 0; t--)
	{
		for(int j = 0; j < t ; j++)
		{
			if(array[j] > array[j + 1])
			{
				T tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}

template<typename T>
void SortableArray<T>::printArray()
{
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
	
	cout << endl;
}