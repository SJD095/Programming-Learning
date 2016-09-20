#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number = 0;
	string tmp;
	
	cin >> number;
	getline(cin, tmp);
	
	cout << "0" << oct << number << tmp << endl;
}