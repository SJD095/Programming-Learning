#include <iostream>
#include <algorithm>
#include <sstream>
#include "Date.h"

using namespace std;

void Date::reset()
{
	year = 2012;
	month = 12;
	day = 5;
}

void Date::set(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

void Date::fromStr(string str)
{
	string Y, M, D;
	auto iter_begin = str.begin(), iter_end = str.end();
	auto iter_inter = find(iter_begin, iter_end, '-');
	Y = string(iter_begin, iter_inter);
	auto iter_inter2 = find(iter_inter + 1, iter_end, '-');
	M = string(iter_inter + 1, iter_inter2);
	D = string(iter_inter2 + 1, iter_end);
	
	year = atoi(Y.c_str());
	month = atoi(M.c_str());
	day = atoi(D.c_str());
}

string Date::toStr() const
{
	string result;
	stringstream tmp;
	
	tmp << year << "-" << month << "-" << day;

	result = tmp.str();
	
	return result;
}