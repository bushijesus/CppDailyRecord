#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class Solution77 {
	vector<vector<int>> result;
	vector<int> path;
	void backtracking(int n, int k, int startIndex) {
		if (path.size() == k)
		{
			result.push_back(path);
			return;
		}
		for (int i = startIndex; i <= n - (k - path.size()) + 1; ++i) // ¼ôÖ¦²Ù×÷
		{
			path.push_back(i);
			backtracking(n, k, i + 1);
			path.pop_back();
		}
	}
public:
	vector<vector<int>> combine(int n, int k) {
		backtracking(n, k, 1);
		return result;
	}
};