#include <iostream>
#include "Time.h"
 
using std::cin;
using std::cout;
using std::endl;
 
int main(void) {
	int totalSeconds;
	cin >> totalSeconds;
 
	Time origin,
		 current(totalSeconds),
		 nextHour(totalSeconds + 60*60),
		 yesterDay(totalSeconds - 24*60*60),
		 tmp(66666666);
 
	cout << origin.getHour() << endl;
	cout << nextHour.getMinute() - current.getMinute() << endl;
	cout << current.getSecond() - yesterDay.getSecond() << endl;
	cout << tmp.getSecond() << endl;
 
	return 0;
}