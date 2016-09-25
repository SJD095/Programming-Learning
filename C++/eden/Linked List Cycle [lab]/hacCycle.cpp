#include <iostream>
#include <set>
#include "hasCycle.h"

using namespace std;

set<ListNode*> nodes;

bool hasCycle(ListNode *head)
{
	if(nodes.find(head) != nodes.end())
	{
		nodes.clear();
		return true;
	}
	else if(head == NULL)
	{
		nodes.clear();
		return false;
	}
	else
	{
		nodes.insert(head);
		return hasCycle(head -> next);
	}
}