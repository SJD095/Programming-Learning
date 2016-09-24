#include <iostream>
#include "manager.h"
using namespace std;
int main(int argc, const char * argv[]) {
	Manager my(4);
	my["Amy"] = 2100.00;
	my["Bob"] = 9000.00;
	my["Tom"] = 800.00;
	cout << "Amy\t" << my["Amy"] << endl;
	cout << "Bob\t" << my["Bob"] << endl;
	cout << "Tom\t" << my["Tom"] << endl;
	my["Amy"] = 10000.00;
	my["Bob"] = 10000.00;
	my.making_table();
}