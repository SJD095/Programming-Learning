#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int n, length, pos, priority, t = 0;;
	queue<int> q;
	priority_queue<int> priority_q;
	cin >> n;
	
	while(n--)
	{
		cin >> length >> pos;
		auto tmp = length;
		while(tmp--)
		{
			cin >> priority;
			q.push(priority);
			priority_q.push(priority);
		}
		
		while(true)
		{
			while(priority_q.top() > q.front())
			{
				auto tmp = q.front();
				q.pop();
				q.push(tmp);
				pos--;
				if(pos < 0)
				{
					pos = length - 1;
				}
			}
			if(pos == 0)
			{
				break;
			}
			priority_q.pop();
			t++;
			q.pop();
			length--;
			pos--;
		}
		
		cout << ++t << endl;
		while(q.size()) q.pop();
		while(priority_q.size()) priority_q.pop();
		t = 0;
	}
}