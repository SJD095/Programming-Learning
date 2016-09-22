#include <iostream>
#include "R18.h"

using namespace std;
vector<int> R18::girls = {};

R18 * R18::getInstance()
{
	return new R18;
}

void R18::date_a_girl(const int &name)
{
	girls.push_back(name);
}

string R18::girls_dated() const
{
	string result;
	
	for(auto c: girls)
	{
		result += to_string(c) + " ";
	}
	
	return result;
}