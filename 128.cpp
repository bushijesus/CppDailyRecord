#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution19 {
public:
	int longestConsecutive(vector<int>& nums) {
		int len = nums.size();
		if (len == 0) return 0;
		sort(nums.begin(), nums.end());
		int max_length = 1;
		int tmp = 1;
		for (int i = 0; i < len - 1; ++i) {
			if (nums[i] + 1 == nums[i + 1]) {
				tmp++;
			}
			else if (nums[i] == nums[i + 1]) {
				continue;
			}
			else {
				tmp = 1;
			}
			max_length = max(max_length, tmp);
		}
		return max_length;
	}
};