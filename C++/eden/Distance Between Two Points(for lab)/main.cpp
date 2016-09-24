#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main()
{
	int n, x1, y1, x2, y2;
	cin >> n;
	double result;
	
	while(n--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		
		result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		
		cout << fixed << setprecision(4) << setw(16) << right << setfill('*') << result << endl;
	}
}