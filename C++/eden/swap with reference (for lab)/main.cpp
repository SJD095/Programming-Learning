#include <iostream>


using std::cin;
using std::cout;
using std::endl;
 
// 引用交换两个整型变量
 
int main(void) {
	int numberOne,
		numberTwo;
 
	cin >> numberOne
		>> numberTwo;
 
	swap(numberOne, numberTwo);
 
	cout << numberOne
		 << " "
		 << numberTwo
		 << endl;
 
	return 0;
}