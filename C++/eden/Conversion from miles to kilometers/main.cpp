#include <iostream>
#include <iomanip>

#define MILE_TO_KILOMETER 1.609

using namespace std;

int main()
{
	int m = 0;

	while(cin >> m)
	{
		if (m <= 0 || m > 1000) cout << "m is out of range" << endl;

			else
			{
				cout << left << setw(15) << "Miles" << "Kilometers" << endl;
				for (int i = 1; m > 0; m--, i++)
				{
					cout << fixed << setprecision(3) << left << setw(15) << i << i * MILE_TO_KILOMETER << endl;
				}
			}
	}
}
