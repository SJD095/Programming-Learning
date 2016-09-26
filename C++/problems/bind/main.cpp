#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show(int a, string s)
{
	cout << a << s;
}

int main()
{
	vector<int> vec;
	int n, tmp;
	
	cin >> n;
	while(n--)
	{
		cin >> tmp;
		vec.push_back(tmp);
	}
	
	for_each(vec.begin(), vec.end(), bind(show, placeholders::_1, " "));
	
	return 0;
}