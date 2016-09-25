#ifndef HASCYCLE_H
#define HASCYCLE_H
#include <cstdlib>
#include <set>

using namespace std;
/**
 * Definition for singly-linked list.
 */
struct ListNode {
	int val;
	ListNode *next;
	explicit ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head);

#endif