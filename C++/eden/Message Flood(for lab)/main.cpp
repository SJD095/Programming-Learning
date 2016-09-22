#include <iostream>
#include <string>
#include <set>

using namespace std;
 
int main()
{
	int m, n, t;
	set<string> friends, messages;
	string tmp;
	cin >> m >> n;
	t = m;
	
	while(m--)
	{
		cin >> tmp;
		friends.insert(tmp);
	}
	
	while(n--)
	{
		cin >> tmp;
		messages.insert(tmp);
	}
	
	for(auto c: messages)
	{
		if(friends.find(c) != friends.end())
		{
			t--;
		}
	}
	
	cout << t << endl;
}