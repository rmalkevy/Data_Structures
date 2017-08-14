//
// Created by Roman Malkevych on 8/14/17.
//

#include <iostream>
#include <deque>
#include <queue>
#include "Stack.h"

int main()
{
//	std::queue<int> abc;
//	std::deque<int> deka;
//
//	deka.push_front(5);
//	deka.push_front(9);
//	deka.push_front(34);
//	deka.push_front(54);
//	deka.push_front(64);
//
//	for (unsigned i = 0, end = deka.size(); i < end; i++)
//	{
//		std::cout << deka.front() << std::endl;
//		deka.pop_front();
//	}

	Stack<int> boba;

	boba.push(2);
	boba.push(34);
	boba.push(56);
	boba.push(78);
	boba.push(89);
	boba.push(123);
	boba.push(234);
	boba.push(2456);

	for (unsigned i = 0, end = boba.size(); i < end; i++)
	{
		std::cout << boba.get() << std::endl;
		boba.pop();
	}
}