#ifndef LIST_H
#define LIST_H
 
#include <iostream>
 
using namespace std;

template<typename T>
class ListNode
{
	public:
		ListNode* next;
		T element;
};

template<typename T>
class List
{
	public:
		List();
		~List();
		void push(T);
		void pop();
		T& top();
		bool empty();
		size_t size();
		
	private:
		ListNode<T>* m_head;
		ListNode<T>* m_tail;
		int s = 0;
};

template<typename T>
List<T>::List()
{
	m_head = NULL;
	m_tail = NULL;
	s = 0;
}

template<typename T>
List<T>::~List()
{
	auto tmp = m_head;
	while(tmp != NULL)
	{
		auto t = tmp;
		tmp = tmp -> next;
		delete t;
	}
}

template<typename T>
void List<T>::push(T e)
{
	auto ptr = new ListNode<T>;
	ptr -> element = e;
	if(!empty())
	{
		ptr -> next = m_head;
		m_head = ptr;
		s++;
	}
	else
	{
		m_head = m_tail = ptr;
		ptr -> next = NULL;
		s++;
	}
}

template<typename T>
void List<T>::pop()
{
	if(!empty())
	{
		auto tmp = m_head;
		m_head = m_head -> next;
		delete tmp;
		s--;
	}
}

template<typename T>
T& List<T>::top()
{
	return m_head -> element;
}

template<typename T>
bool List<T>::empty()
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

template<typename T>
size_t List<T>::size()
{
	return s;
}
 
#endif