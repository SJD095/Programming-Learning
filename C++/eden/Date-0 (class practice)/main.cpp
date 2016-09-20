#include <iostream>
#include <string>
#include "Date.h"

using namespace std;
 
int main() {
	Date d;
	int iy, im, id;
	string is;
	d.reset();
	cout << d.toStr() << endl;
	cin >> iy >> im >> id;
	d.set(iy, im, id);
	cout << d.toStr() << endl;
	cin >> is;
	d.fromStr(is);
	cout << d.toStr() << endl;
	return 0;
}