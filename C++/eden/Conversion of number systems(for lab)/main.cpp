#include <iostream>
#include <string>
#include <cmath>

using namespace std;
 
int main()
{
	int from, to, number, in_ten = 0;
	string result;
	
	cin >> from >> to >> number;
	
	int yushu = 0;
	for(int i = 0; number != 0; i++)
	{
		yushu = number % 10;
		number /= 10;
		in_ten += pow(from, i) * yushu;
	}
	
	yushu = 0;
	for(int i = 0; in_ten != 0; i++)
	{
		yushu = in_ten % to;
		in_ten /= to;
		if(yushu > 9)
		{
			result.insert(0, 1, yushu + 'A' - 10);
		}
		else
		{
			result.insert(0, 1, yushu + '0');
		}
		
	}
	
	cout << result << endl;
}