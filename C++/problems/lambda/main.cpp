#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
	
	for_each(vec.begin(), vec.end(), [] (int a){ cout << a << " ";});
	
	return 0;
}