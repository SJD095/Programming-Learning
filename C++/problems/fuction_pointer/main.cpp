#include <iostream>

using namespace std;

void show(int a, int b)
{
	cout << a << ' ' << b << endl;
}

void test(int a, int b, void (*pf)(int, int) = show)
{
	cout << "test ";
	pf(a, b);
}

int main()
{
	int t1, t2;
	cin >> t1 >> t2;
	
	void (*pf)(int, int);
	pf = show;
	
	pf(t1, t2);
	test(t1, t2);
	
	return 0;
}
