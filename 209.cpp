#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class Solution209 {
public:
	int minSubArrayLen(int target, vector<int>& nums) {
		// 滑动窗口
		int result = INT_MAX;
		int subLength = 0; // 子序列长度
		int i = 0;   // 滑动窗口起始位置
		long long int sum = 0; // 窗口内数值之和
		for (int j = 0; j < nums.size(); ++j)
		{
			sum += nums[j];
			while (sum >= target)
			{
				subLength = j - i + 1;
				result = result < subLength ? result : subLength;
				sum -= nums[i++];
			}
		}
		return result == INT_MAX ? 0 : result;
	}
};