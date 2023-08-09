#include "stdafx.h"
#include <vector>
#include <stack>
#include <iostream>
using namespace std;
// Ã»¿´¶®
class Solution739 {
public:
	vector<int> dailyTemperatures(vector<int>& temperatures) {
		vector<int> result(temperatures.size());
		stack<int> st;
		for (int i = 0; i < temperatures.size(); ++i) {
			while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
				int prevIndex = st.top();
				st.pop();
				result[prevIndex] = i - prevIndex;
			}
			st.push(i);
		}

		return result;
	}
};