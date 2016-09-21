#include <iostream>
using std::cout;
 
#include "match.h" 

bool Match::isMatch(char *s)
{
	Stack st;
	
	for(int i = 0; i < strlen(s) / 2; i++)
	{
		st.push(s[i]);
	}
	
	int tmp = strlen(s) / 2 + 1;
	while(!st.isEmpty())
	{
		if(st.pop() != s[tmp])
		{
			return false;
		}
		
		tmp++;
	}
	
	return true;
}