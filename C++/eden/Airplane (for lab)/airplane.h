#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>

using namespace std;

class Airplane {
	 public:
		virtual void fly(const string& dest) = 0;
	 protected:
		void defaultFly(const string& dest);
};

class ModelA: public Airplane
{
	public:
		virtual void fly(const string& dest)
		{
			cout << "The airplane flies straightly to airport " << dest << endl;
		}
};

class ModelB: public Airplane
{
	public:
		virtual void fly(const string& dest)
		{
			cout << "The airplane flies straightly to airport " << dest << endl;
		}
};

class ModelC: public Airplane
{
	public:
		virtual void fly(const string& dest)
		{
			cout << "The airplane flies in a semi-circle track to airport " << dest << endl;
		}
};

#endif