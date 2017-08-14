//
// Created by Roman Malkevych on 8/14/17.
//

#include "Stack.h"

template <typename T>
void Stack::push(T item)
{
	_deka.push_front(item);
}

void Stack::pop()
{
	_deka.pop_front();
}

template <typename T>
T Stack::get()
{
	return ( _deka.front() );
}

unsigned long Stack::size()
{
	return _deka.size();
}