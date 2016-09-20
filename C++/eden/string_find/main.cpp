#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string input, fault, change, output;
	
	getline(cin, input);
	cin >> fault >> change;
	
	auto pos = input.find(fault);
	
	if (pos != -1)
	{
		output = input.substr(0, pos) + change;
		auto pre_pos = pos + fault.size();
		
		while((pos = input.find(fault, pre_pos)) != -1)
		{
			output += input.substr(pre_pos, pos - pre_pos) + change;
			pre_pos = pos + fault.size();
		}
		
		output += input.substr(pre_pos, input.size());
		cout << output << endl;
	}
}