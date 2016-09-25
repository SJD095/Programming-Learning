#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	vector<char> vec;
	string str;
	
	cin >> n;
	while(n--)
	{
		cin >> str;
		for(auto iter = str.begin(); iter != str.end(); iter++)
		{
			vec.push_back(*iter);
		}
		
		sort(vec.begin(), vec.end());
		for(auto c: vec)
		{
			cout << c;
		}
		cout << endl;
		
		vec.clear();
	}
}