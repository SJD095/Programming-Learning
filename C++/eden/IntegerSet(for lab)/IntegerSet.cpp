#include <iostream>
#include <string>
#include "IntegerSet.h"

using namespace std;

IntegerSet::IntegerSet(int array[], int size)
{
	emptySet();
	 
	for (int i = 0; i < size; i++)
	{
		insertElement(array[ i ]);
	}
}

IntegerSet IntegerSet::unionOfSets(const IntegerSet& R)
{
	IntegerSet result;
	for(int i = 0; i < 100; i++)
	{
		if(set[i] == 1 || R.set[i] == 1)
		{
			result.insertElement(i);
		}
	}
	
	return result;
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet& R)
{
	IntegerSet result;
	for(int i = 0; i < 100; i++)
	{
		if(set[i] == 1 && R.set[i] == 1)
		{
			result.insertElement(i);
		}
	}
	
	return result;
}

void IntegerSet::emptySet()
{
	for(int i = 0; i < 101; i++)
	{
		set[i] = 0;
	}
}

void IntegerSet::insertElement(int element)
{
	set[element] = 1;
}

void IntegerSet::deleteElement(int element)
{
	set[element] = 0;
}

bool IntegerSet::isEqualTo(const IntegerSet& R) const
{
	for(int i = 0; i < 100; i++)
	{
		if(set[i] != R.set[i])
		{
			return false;
		}
	}
	
	return true;
}