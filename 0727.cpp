#include "stdafx.h"
#include <iostream>
using namespace std;

class A {
public:
	A();
	int num;
	A& operator++();
	A operator++(int);
};

A & A::operator++()
{
	num++;
	return *this;
}

A A::operator++(int)
{
	A tmp = *this;
	num++;
	return tmp;
}

A::A() {
	num = 0;
}

// int main()
// {
// 	A a1;
// 	A a2;
// 	a2 = a1;
// 	return 0;
// }
