#ifndef EXCHANGE_H
#define EXCHANGE_H

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string change1(char* st)
{
	string result;
	
	for(int i = 0; st[i] != '\0'; i++)
	{
		result += st[i];	
	}
	
	return result;
}

void change2(string st1, char* st2)
{
	int i = 0;
	for(auto c: st1)
	{
		st2[i] = c;
		i++;
	}
	
	st2[i + 1] = '\0';
}

#endif