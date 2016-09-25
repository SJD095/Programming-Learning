#include <iostream>
#include <stdexcept>

using namespace std;

void check_negative(int i)
{
	if(i >= 0)
	{
		throw logic_error("Not a negative number");
	}
	else 
	{
		cout << "Negative number" << endl;
	}
}