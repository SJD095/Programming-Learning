#include <iostream>
#include <initializer_list>

using namespace std;

void initializer_list_test(initializer_list<string> li)
{
	for(auto iter = li.begin(); iter != li.end(); iter++)
	{
		cout << *iter << endl;
	}
}

int main()
{
	string t1, t2, t3, t4, t5;
	
	cin >> t1 >> t2 >> t3;
	initializer_list_test({t1, t2, t3});
	
	cin >> t4 >> t5;
	initializer_list_test({t4, t5});
	
	return 0;
}