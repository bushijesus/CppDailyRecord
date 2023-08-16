#include "stdafx.h"
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class MyQueue {
public:
    stack<int> stIn;
	stack<int> stOut;

    MyQueue() {

    }

    void push(int x) {
        stIn.push(x);
    }

    int pop() {
        if (stOut.empty())
        {
            while (!stIn.empty())
            {
                stOut.push(stIn.top());
                stIn.pop();
            }
        }
        int result = stOut.top();
        stOut.pop();
        return result;
    }

    int peek() {
        int result = pop();
        stOut.push(result);
        return result;
    }

    bool empty() {
        return stIn.empty() && stOut.empty();
    }
};
