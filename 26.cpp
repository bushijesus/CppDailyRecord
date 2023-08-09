#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int n = nums.size();
		int count = 0; // 要删除的重复元素数量
		for (int i = 0; i < n - 1; ++i) {
			if (nums[i] == nums[i + 1]) {
				count++;
			}
		}
		nums.erase(unique(nums.begin(), nums.end()), nums.end()); // 使用算法库中的 erase-remove idiom 删除重复元素
		return n - count;
	}
};