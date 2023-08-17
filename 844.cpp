#include "stdafx.h"
#include <string>
#include <stack>
#include <iostream>
using namespace std; 

class Solution844 {
    string proc(const string& s) {
		stack<char> st;
        string process;
        for (char c : s)
        {
            if (c != '#')
            {
                st.push(c);
            }
            else if (!st.empty())
            {
                st.pop();
            }
        }
        while (!st.empty()) {
            process.push_back(st.top());
            st.pop();
        }
        return process;
    }
public:
    bool backspaceCompare(string s, string t) {
        return proc(s) == proc(t);
    }
};