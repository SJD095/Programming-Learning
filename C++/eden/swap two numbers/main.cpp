#include <iostream>

using namespace std;

void swap(int &, int &);

int main() {
	int a = 0, b = 0;
	cin >> a >> b;
	
	swap(a, b);
	
	cout << a << " " << b << endl;
}

void swap(int & i, int & j)
{
	int tmp = 0;
	tmp = i;
	i = j;
	j = tmp;
}