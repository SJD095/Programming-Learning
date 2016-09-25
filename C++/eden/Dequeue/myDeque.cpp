#include <iostream>
#include "myDeque.h"

using namespace std;

myDeque::myDeque():_head(NULL), _tail(NULL), _size(0)
{
	
}
myDeque::myDeque(const myDeque & d)
{
	_size = d._size;
	if(d._head != NULL)
	{
		_head = new listNode(d._head -> x, d.head -> _prep, d._head -> _succ);
		auto tmp = _head;
		auto focus = d._head -> next;
		while(focus != d._tail)
		{
			tmp -> next = new listNode(focus -> x, focus -> _prep, focus -> _succ);
			focus = focus -> next;
			tmp = tmp -> next;
		}
	}
	else
	{
		_head = _tail = NULL;
	}
}

myDeque::~myDeque();
{
	auto tmp = _head;
	while(tmp != _tail)
	{
		auto n = tmp;
		tmp = tmp -> next;
		delete n;
	}
}

int myDeque::getSize() const
{
	return _size;
}

bool myDeque::empty() const
{
	return _size = 0 ? true : false;
}
int myDeque::head() const
{
	return _head -> _x;
}

int myDeque::tail() const
{
	return _tail -> _x;
}

void myDeque::push_front(const int & t)
{
	auto tmp = new listNode(t, NULL, _head);
	_head = tmp;
	_size++;
}

void myDeque::push_back(const int & t)
{
	auto tmp = new listNode(t, _tail, NULL);
	_tail = tmp;
	_size++;
}
bool myDeque::pop_front()
{
	if(empty())
	{
		return false;
	}
	else
	{
		auto tmp = _head;
		_head = _head -> _succ;
		delete tmp;
		size--;
		return true;
	}
}
bool myDeque::pop_back()
{
	if(empty())
	{
		return false;
	}
	else
	{
		auto tmp = _tail;
		_tail = _tail -> _prep;
		delete tmp;
		size--;
		return true;
	}
}