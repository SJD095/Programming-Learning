#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string qq, ip;
	map<string, string> result_qq, result_ip;
	
	while(n--)
	{
		cin >> qq >> ip;
		if(result_qq.find(qq) == result_qq.end())
		{
			result_qq[qq] = ip;
		}
		else 
		{
			if(result_qq[qq].find(ip) == -1)
			{
				result_qq[qq] += " " + ip;
			}
		}
		
		if(result_ip.find(ip) == result_ip.end())
		{
			result_ip[ip] = qq;
		}
		else 
		{
			if(result_ip[ip].find(qq) == -1)
			{
				result_ip[ip] += " " + qq;
			}
		}
	}
	
	cin >> ip >> qq;
	cout << ip << " ==> [" << result_ip[ip] << " ]" << endl;
	cout << qq << " ==> [" << result_qq[qq] << " ]" << endl;
}