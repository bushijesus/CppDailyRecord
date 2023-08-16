#include "stdafx.h"
#include <iostream>
#include <queue>
#include <string>
using namespace std;

class MyStack {
	queue<int> que1;
	queue<int> que2;   // 用作备份
public:
	MyStack() {

	}

	void push(int x) {
		que1.push(x);
	}

	int pop() {
		int size = que1.size();
		size--;
		while (size--)
		{
			que2.push(que1.front());
			que1.pop();
		}
		int result = que1.front(); // 所剩的最后一个元素
		que1.pop();
		que1 = que2;
		while (!que2.empty())
		{
			que2.pop();
		}
		return result;
	}

	int top() {
		return que1.back();
	}

	bool empty() {
		return que1.empty();
	}
};