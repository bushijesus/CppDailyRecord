// 0810.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstring>
#include <iostream>
using namespace std;

void test1() {
	int a = 43545;
	char b = static_cast<char>(a);
	char c = (char)a;
	cout << (int)b << endl;
	cout << (int)c << endl;


	char* p = new char[64];
	memcpy(p, "hello", 6);
	cout << p << endl;
	int * p1 = reinterpret_cast<int *>(p);
	cout << p1 << endl;

	const char* str = "world";
	char* s = const_cast<char*>(str);
	cout << s << endl;
}

class A {
public:
	virtual void output() {
		cout << "A" << endl;
	}
};
class B : public A {
private:
	char* p;
public:
	B() {
		p = new char[128];
	}
	void update() {
		strcpy_s(p, 128, "this is a test");
		cout << p << endl;
	}
};

void test2() {
// 	B b;
// 	b.update();

	//A * p = new A;
	A * p = new B;
	B * p1 = dynamic_cast<B*>(p);
	if (p1)
	{
		p1->update();
	}
	else
	{
		cout << "指针为空" << endl;
	}
}

void test3() {
	auto f1 = [](int a)->int {
		cout << a << endl;
		return 0;
	};

	f1(88888);

	int N = 100;
	int M = 10;
	auto g = [N, &M](int i)->int {
		M = 20;
		return N * i;
	};
	int res = g(15);
	cout << "res:" << res << endl;
	cout << "N:" << N << endl;
	cout << "M:" << M << endl;

}

void test4() {
	auto f2 = [](int a, int b) {
		return a > b;
	};
	if (f2(3, 4)) cout << ">" << endl;
	else cout << "<" << endl;
}


template<class T, class Cmp>
void Sort(T* arr, int cnt, Cmp cmp)
{
	for (int i = 0; i < cnt - 1; ++i)
	{
		for (int j = 0; j < cnt - 1 - i; ++j)
		{
			if (cmp(arr[j], arr[j + 1]))
			{
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < cnt; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}
void test5() {
	int arr[5] = { 2,5,6,3,1 };
	//Sort(arr, 5, Cmp<int>());
	Sort(arr, 5, [](int a, int b) {
		return a > b;
	});
}

void test6() {
	int a = 869;
	auto f3 = [&]() {
		a = 10;
		cout << a << endl;
	};
	f3();
}


double Divide(int a, int b) {
	if (b == 0)
	{
		throw "err";
	}
	if (b == 1)
	{
		throw 2.2;
	}
	return a / b;
}
void test7() {
// 	cout << "开始计算" << endl;
// 	Divide(5, 0);
// 	cout << "计算完成" << endl;

	try
	{
		Divide(5, 1);
		Divide(5, 0);
		
	}
	catch (const char * e)
	{
		cout << e << endl;
	}
	catch (int e)
	{
		cout << e << endl;
	}
	catch (...)
	{
		cout << "输入有误" << endl;
	}
}

//int main()
//{
//	test7();
//    return 0;
//}

