#ifndef ANIMAL_H
#define ANIMAL_H
 
#include <iostream>
#include <string>

using namespace std;

class Animal
{
	public:
		Animal(string n): name(n) {}
		virtual string shout(){return "";}
		
	public:
		string name;
};

class Dog: public Animal
{
	public:
		Dog(string name, string color):Animal(name), color(color)
		{
			
		}
		
		string shout()
		{
			cout << "bark" << endl;
		}
		
		string getColor()
		{
			return color;
		}

	private:
		string color;
};

class Donkey: public Animal
{
	public:
		Donkey(string name, int weight):Animal(name), weight(weight)
		{
			
		}

		string shout()
		{
			cout << "hee-haw" << endl;
		}

		int getWeight()
		{
			return weight;
		}

	private:
		int weight;
};

#endif