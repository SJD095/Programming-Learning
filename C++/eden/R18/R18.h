#ifndef R18_H
#define R18_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class R18 {

	public:
		static R18 *getInstance();  // get game instance

		void date_a_girl(const int &name);  // date a girl (name is int)

		string girls_dated() const;  // girls dated before ordered by time, formatting "A,B,C,D"
		
	private:
		static vector<int> girls;
};

#endif