#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Solution228 {
public:
	vector<string> summaryRanges(vector<int>& nums) {
		vector<string> s;
		if (nums.size() == 0) return s;
		int left = 0;
		int right = 0;
		for (int i = 0; i < nums.size() - 1; ++i)
		{
			if (nums[i + 1] == nums[i] + 1)
			{
				continue;
			}
			else
			{
				right = i;
				if (nums[left] == nums[right])
				{
					s.push_back(to_string(nums[left]));
				}
				else
				{
					s.push_back(to_string(nums[left]) + "->" + to_string(nums[right]));
				}
				left = right + 1;
			}
		}
		// 处理最后一个元素
		if (left < nums.size())
		{
			if (nums[left] == nums[nums.size() - 1])
			{
				s.push_back(to_string(nums[left]));
			}
			else
			{
				s.push_back(to_string(nums[left]) + "->" + to_string(nums[nums.size() - 1]));
			}
		}
		return s;
	}
};