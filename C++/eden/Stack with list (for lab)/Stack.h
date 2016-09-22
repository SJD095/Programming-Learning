#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "List.h"

using namespace std;

template<class T>
class Stack
{
	public:
		Stack();
		~Stack();
		void push(T );
		void pop();
		T& top();
		bool empty();
		size_t size();
	private:
		List<T> li;
};

template<typename T>
Stack<T>::Stack()
{
	
}

template<typename T>
Stack<T>::~Stack()
{
	
}

template<typename T>
void Stack<T>::push(T a)
{
	li.push(a);
}

template<typename T>
void Stack<T>::pop()
{
	li.pop();
}

template<typename T>
T& Stack<T>::top()
{
	return li.top();
}

template<typename T>
bool Stack<T>::empty()
{
	return li.empty();
}

template<typename T>
size_t Stack<T>::size()
{
	return li.size();
}

#endif