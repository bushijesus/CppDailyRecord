#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class Solution216 {
	vector<vector<int>> result;
	vector<int> path;
	void backtracking(int targetSum, int k, int curSum, int startIndex) {
		if (curSum > targetSum)        // ��֦
		{
			return;
		}
		if (path.size() == k)
		{
			if (curSum == targetSum)
			{
				result.push_back(path);
			}
			return;
		}
		for (int i = startIndex; i <= 9 - (k - path.size()) + 1; ++i)   // ��֦
		{
			curSum += i;
			path.push_back(i);
			backtracking(targetSum, k, curSum, i + 1);
			curSum -= i;           // ����
			path.pop_back();       // ����
		}
	}
public:
	vector<vector<int>> combinationSum3(int k, int n) {
		backtracking(n, k, 0, 1);
		return result;
	}
};