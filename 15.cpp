#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std; 

class Solution15 {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> result;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] > 0)
			{
				return result;
			}
			// 对a去重
			if (i > 0 && nums[i] == nums[i - 1])
			{
				continue;
			}
			int left = i + 1;
			int right = nums.size() - 1;
			while (left < right)    // 严格小于
			{
				if (nums[i] + nums[left] + nums[right] > 0)
				{
					right--;
				}
				else if (nums[i] + nums[left] + nums[right] < 0)
				{
					left++;
				}
				else
				{
					result.push_back({ nums[i], nums[left], nums[right] });
					// 对b和c去重
					while (left < right && nums[left] == nums[left + 1])
					{
						left++;
					}
					while (left < right && nums[right] == nums[right - 1])
					{
						right--;
					}
					left++;
					right--;
				}
			}
		}
		return result;
	}
};