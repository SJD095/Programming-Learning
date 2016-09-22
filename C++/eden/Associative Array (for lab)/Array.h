#ifndef ARRAY_H
#define ARRAY_H
 
#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
class Array
{
	public:
		int& operator[](const int a)
		{
			ii.insert(make_pair(a, 0));
			return ii[a];
		}
		
		int& operator[](const string s)
		{
			si.insert(make_pair(s, 0));
			return si[s];
		}
		
	private:
		map<string, int> si;
		map<int, int> ii;
};
 
#endif