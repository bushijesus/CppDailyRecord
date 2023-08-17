#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

class Solution40 {
// 	vector<vector<int>> result;
// 	vector<int> path;
// 	void backtracking(vector<int>& candidates, int target, int curSum, int startIndex) {
// 		if (curSum > target)
// 		{
// 			return;
// 		}
// 		if (curSum == target)
// 		{
// 			result.push_back(path);
// 			return;
// 		}
// 		for (int i = startIndex; i < candidates.size(); ++i)
// 		{
// 			curSum += candidates[i];
// 			path.push_back(candidates[i]);
// 			backtracking(candidates, target, curSum, i + 1);
// 			curSum -= candidates[i];
// 			path.pop_back();
// 		}
// 	}
// public:
// 	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
// 		backtracking(candidates, target, 0, 0);
// 		return result;
// 	}
};