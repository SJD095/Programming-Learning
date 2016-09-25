#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

int parseHex(const char * const hexString)
{
	int result = 0, counter = 0;
	
	for(int i = strlen(hexString) - 1; i >= 0; i--)
	{
		int num;
		
		if(hexString[i] >= 'a' && hexString[i] <= 'e')
		{
			num = hexString[i] - 'a' + 10;
		}
		else if(hexString[i] >= 'A' && hexString[i] <= 'E')
		{
			num = hexString[i] - 'A' + 10;
		}
		else if(hexString[i] == '+' || hexString[i] == '-')
		{
			if(hexString[i] == '-')
			{
				result = -result;
				return result;
			}
		}
		else if(hexString[i] >= '0' && hexString[i] <= '9')
		{
			num = hexString[i] - '0';
		}
		else
		{
			throw runtime_error("Hex number format error");
		}
		
		result += num * pow(16, counter);
		++counter;
	}
	
	return result;
}