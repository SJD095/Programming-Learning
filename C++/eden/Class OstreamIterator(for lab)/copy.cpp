#include <iostream>
#include <vector>
#include "OstreamIterator.h"

using namespace std;

void CopyIterator(vector<int>::iterator begin, vector<int>::iterator end, OstreamIterator out_it)
{
	for(; begin != end; begin++)
	{
		out_it = *begin;
	}
}