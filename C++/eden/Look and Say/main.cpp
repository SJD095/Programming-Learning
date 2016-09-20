#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 0;
	string input;
	cin >> n;
	
	while(n--)
	{
		cin >> input;
		auto tmp = input[0];
		int count = 0;
		
		for (auto c: input)
		{
			if (c == tmp) count++;
			else
			{
				cout << count << tmp;
				tmp = c;
				count = 1;
			}
		}
		cout << count << tmp;
		
		cout << endl;
	}
}