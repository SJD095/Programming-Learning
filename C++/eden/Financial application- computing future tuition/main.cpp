#include <iostream>
#include <cmath>
#include <iomanip>

#define TUITION 10000
#define INCREASE_RATE 0.05

using namespace std;



int main()
{
	int n = 0, out = 0;
	double result = 0;
	
	cin >> n;
	
	if (n > 0)
	{
		if (n > 100) n %= 100;
		result = static_cast<double> (TUITION);
		for (; n > 0; n--)
		{
			result *= 1 + INCREASE_RATE;
		}
		
		out = floor(result);
		cout << fixed << setprecision(2) << out << endl;
	}
	
	else
	{
		cout << "n < 0" << endl;
	}
}