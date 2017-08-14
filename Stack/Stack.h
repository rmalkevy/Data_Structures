//
// Created by Roman Malkevych on 8/14/17.
//

#ifndef DATASTRUCTURE_STACK_H
#define DATASTRUCTURE_STACK_H

#include <iostream>
#include <deque>

template <class T>
class Stack
{
public:
	void    push(T item)    { _deka.push_front(item); };
	void    pop()           { _deka.pop_front(); };
	T       get()           { return ( _deka.front() ); };
	unsigned long size()    { return _deka.size(); };

private:
	std::deque<T> _deka;
};

//template <typename T>
//void Stack::push(T item)
//{
//	_deka.push_front(item);
//}
//
//void Stack::pop()
//{
//	_deka.pop_front();
//}

//template <typename T>
//T Stack::get()
//{
//	return ( _deka.front() );
//}
//
//unsigned long Stack::size()
//{
//	return _deka.size();
//}

#endif //DATASTRUCTURE_STACK_H
