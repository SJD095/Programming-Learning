#ifndef ADAPTER_H
#define ADAPTER_H
 
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
 
using namespace std;
 
class Adapter {
	public:
		static void show(vector<double>::iterator beg, vector<double>::iterator
				end, void (*Show)(double para)) {
			for_each(beg, end, Show);
		}
		static void add(vector<double>::iterator beg1, vector<double>::iterator
				end1, vector<double>::iterator beg2, vector<double>::iterator
				beg3) {
			transform(beg1, end1, beg2, beg3, plus<double>());
		}
		static void multi(vector<double>::iterator beg1,
				vector<double>::iterator end1, vector<double>::iterator beg2,
				double t) {
			transform(beg1, end1, beg2, bind2nd(multiplies<double>(), t));
		}
};
 
#endif