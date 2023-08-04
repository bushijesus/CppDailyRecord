// 0804.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Dog.h"
#include "Array.h"
#include <functional>
#include <iostream>
using namespace std;

void test01() {
	Dog d1(1,"金毛", 5);
	d1.getDog();
	Dog::getDogInfo(d1);
}

template<class T>
T add(T a, T b) {
	return a + b;
}

void test02() {
	cout << add(1, 2) << endl;
	cout << add(1.2, 2.3) << endl;
}
template<class T>
void output(T* array, int count) {
	for (int i = 0; i < count; ++i) {
		cout << array[i] << ' ';
	}
	cout << endl;
}

void test03() {
	int a1[5] = { 10, 30, 1, 4, 99 };
	output(a1, 5);
	double a2[4] = { 11.3, 44.3, 11.9, 77.4 };
	output(a2, 4);
}

template<class T, int rows>
void sum(T data[], T& result) {
	for (int i = 0; i < rows; ++i)
	{
		result += data[i];
	}
}

void test04() {
	int arr[] = { 1,2,3,4,5 };
	int result = 0;
	sum<int, 5>(arr, result);
	cout << result << endl;
}


bool myCmp1(int a, int b) {
	return a < b;
}
template<class T>
struct Greater
{
	bool operator()(T a, T b) {
		return a > b;
	}
};
struct Less
{
	bool operator()(int a, int b) {
		return a < b;
	}
};

void test05() {
	int arr[5] = { 4, 5, 2, 3, 1 };
	Sort(arr, 5, greater<int>());
	Sort(arr, 5, less<int>());
	//Sort(arr, 5, Less());
}
// int main()
// {
// 	test05();
//     return 0;
// }

