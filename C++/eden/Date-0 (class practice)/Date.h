#ifndef DATE_H
#define DATE_H
 
#include <string>

using namespace std;
 
class Date {
	public:
		void reset();
		void set(int y, int m, int d);
		void fromStr(string str);
		string toStr() const;
	private:
		int year, month, day;
};
 
#endif