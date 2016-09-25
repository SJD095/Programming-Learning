#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string a, b;
	bool result = false;
	
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		if(a.find(b) != string::npos || b.find(a) != string::npos)
		{
			result = true;
		}
		
		if(result)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		
		result = false;
	}
}