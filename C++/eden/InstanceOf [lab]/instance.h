#ifndef INSTANCE_H
#define INSTANCE_H

#include <iostream>

using namespace std;

class Object
{
	public:
		virtual string name() = 0;
};

class Animal: public Object
{
	public:
		virtual string name()
		{
			return "Animal";
		}
};

class Dog: public Animal
{
	virtual string name()
	{
		return "Dog";
	}	
};

class Cat: public Animal
{
	public:
		virtual string name()
		{
			return "Cat";
		}	
};

class Vehicle: public Object
{
	public:
		virtual string name()
		{
			return "Vehicle";
		}	
};

class Bus: public Vehicle
{
	public:
		virtual string name()
		{
			return "Bus";
		}
};

class Car: public Vehicle
{
	public:
		virtual string name()
		{
			return "Car";
		}
};

string instanceOf(Object* other)
{
	return other == NULL ? "NULL" : other -> name();
}

#endif