#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
	int findMissingPositive(vector<int>& nums) {
		int n = nums.size();

		// 第一次遍历，将每个正数 x 放到数组下标为 x-1 的位置上
		for (int i = 0; i < n; ++i) {
			while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
				swap(nums[i], nums[nums[i] - 1]);
			}
		}

		// 第二次遍历，寻找第一个位置 i，使得 nums[i] != i+1
		for (int i = 0; i < n; ++i) {
			if (nums[i] != i + 1) {
				return i + 1;
			}
		}

		// 如果数组中的所有数都正确放置在对应位置上，则缺失的第一个正数为 n+1
		return n + 1;
	}
};