#include <iostream>
#include <iomanip>

using namespace std;

double readNumber()
{
	int place = 10;
	double result = 0;
	result += cin.get() - '0';
	while(cin.peek() != '\n' && cin.peek() != '.')
	{
		result = 10 * result + cin.get() - '0';
	}
	if(cin.peek() == '.')
	{
		cin.ignore();
	}
	
	while(cin.peek() != '\n')
	{
		result += static_cast<double>(cin.get() - '0') / place;
		place *= 10;
	}
	cin.ignore();
	
	return result;
}

void printFormatted(double x, double y)
{
	char buffer[] = "The value of x is: ";
	for (int i = 0; buffer[i] != '\0'; i++)
		cout.put(buffer[i]);
	cout << setw(12) << setfill('0')
		<< fixed << noshowpos << left << x << endl;
	cout.write("The value of y is: ", 19);
	cout << setprecision(2) << scientific << right << y << endl;
}