#include <iostream>
#include "DouList.h"

using namespace std;

int  DouList::_error_sign = -1;
 
DouList::DouList()
{
	m_head = NULL;
	m_tail = NULL;
}

DouList::DouList(const DouList &src)
{
	auto ptr = new DouListNode;
	ptr -> elem = src.m_head -> elem;
	ptr -> prev = NULL;
	
	m_head = ptr;
	
	auto tmp = src.m_head;
	while(tmp != src.m_tail)
	{
		tmp = tmp -> next;
		
		ptr -> next = new DouListNode;
		auto t = ptr;
		ptr = ptr -> next;
		ptr -> prev = t;
		ptr -> elem = tmp -> elem;
	}
	
	ptr -> next = new DouListNode;
	auto t = ptr;
	ptr = ptr -> next;
	ptr -> prev = t;
	ptr -> elem = src.m_tail -> elem;
	
	m_tail = ptr;
}

DouList::~DouList()
{
	clear();
}

void DouList::clear()
{
	DouListNode *tmp = m_head;
	
	while(tmp != m_tail)
	{
		auto now = tmp;
		tmp = tmp -> next;
		delete now;
	}
	
	if(tmp != NULL) 
	{
		delete tmp;
	}
}

bool DouList::empty() const
{
	if(m_head == NULL && m_tail == NULL)
	{
		return true;
	}
	else
	{
		return false;	
	}
}

string DouList::to_str() const
{
	if(!this -> empty())
	{
		auto tmp = m_head;
		string result = "[";
		
		while(tmp != m_tail)
		{
			result += " " + to_string(tmp -> elem) + ",";
			tmp = tmp -> next;
		}
		
		result += " " + to_string(m_tail -> elem) + " ]";
		return result;
	}
	else
	{
		string r = " Empty ";
		return r;
	}
}

int DouList::front() const
{
	return m_head -> elem;
}

int DouList::back() const
{
	return m_tail -> elem;
}

void DouList::push_front(const int &e)
{
	auto newptr = new DouListNode;
	newptr -> elem = e;
	newptr -> next = m_head;
	newptr -> prev = NULL;
	if(m_head != NULL) m_head -> prev = newptr;
	else
	{
		m_tail = newptr;
	}
	m_head = newptr;
}

void DouList::push_back(const int &e)
{
	auto newptr = new DouListNode;
	newptr -> elem = e;
	newptr -> next = NULL;
	newptr -> prev = m_tail;
	if(m_tail != NULL) m_tail -> next = newptr;
	else
	{
		m_head = newptr;
	}
	m_tail = newptr;
}

void DouList::pop_front()
{
	if(m_head != NULL)
	{
		auto tmp = m_head;
		m_head = m_head -> next;
		delete tmp;
	}
}

void DouList::pop_back()
{
	if (this->empty())
		return;
	if (m_head == m_tail) {
		this->clear();
	} else {
		m_tail = m_tail->prev;
		delete m_tail->next;
		m_tail->next = 0;
	}
}

void DouList::operator=(const DouList &other)
{
	this->clear();
	m_head = m_tail = 0;
	if (other.empty())
		return;
	m_head = new DouListNode(other.m_head->elem);
	DouListNode *p = m_head;
	DouListNode *q = other.m_head->next;
	while (q) {
		p->next = new DouListNode(q->elem, p);
		p = p->next;
		q = q->next;
	}
	m_tail = p;
}

ostream& operator<<(std::ostream &out, const DouList &list)
{
	out << list.to_str() << endl;
	
	return out;
}
