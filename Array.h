#pragma once
#include <iostream>
using namespace std;
template<class T, class Cmp>
void Sort(T *arr, int cnt, Cmp cmp) {
	for (int i = 0; i < cnt - 1; ++i)
	{
		for (int j = 0; j < cnt - i - 1; ++j)
		{
			if (cmp(arr[j + 1], arr[j]))
			{
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}