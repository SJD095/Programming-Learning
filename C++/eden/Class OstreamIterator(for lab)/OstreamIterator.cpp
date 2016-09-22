#include <iostream>
#include "OstreamIterator.h" 

using namespace std;

OstreamIterator::OstreamIterator(ostream *s, char delim):output(s), delim(delim)
{
	
}

OstreamIterator& OstreamIterator::operator =(const int &value)
{
	(*output) << value << delim;
	return *this;
}

OstreamIterator& OstreamIterator::operator*()
{
	return *this;
}

OstreamIterator& OstreamIterator::operator++()
{
	return *this;
}

OstreamIterator& OstreamIterator::operator++(int a)
{
	return *this;
}