#ifndef _OSTREAM_INTERATOR_
#define _OSTREAM_INTERATOR_
#include <iostream>
 
using std::cout;
using std::ostream;
 
class OstreamIterator {
	public:
		OstreamIterator(ostream *s, char delim);
		OstreamIterator & operator =(const int &value);
		OstreamIterator & operator*();
		OstreamIterator & operator++();
		OstreamIterator & operator++(int);
	private:
		ostream *output;
		char delim;
};
#endif