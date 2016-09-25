#include <iostream>
#include "VirtualBase.h"
#include "Derived.h"
using namespace std;
 
void printTheValue1(VirtualBase* v) {
	cout << "printTheValue1(): value is " << v->getValue() << endl;
}
void printTheValue2(const Derived &d) {
	d.printValue();
}
int main(int argc, char** argv) {
	int ret = 0;
	Derived d;
	VirtualBase* v = &d;
	cin >> ret;
	v->setValue(ret);
	printTheValue1(v);
	printTheValue2(d);
	return 0;
}