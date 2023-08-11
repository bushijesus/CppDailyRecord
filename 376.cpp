#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class Solution376 {
public:
	int wiggleMaxLength(vector<int>& nums) {
		int len = nums.size();
		if (len <= 1) {
			return len;
		}

		int maxLength = 1;
		int prevDiff = 0;
		int currDiff = 0;

		for (int i = 1; i < len; ++i) {
			currDiff = nums[i] - nums[i - 1];
			if ((currDiff > 0 && prevDiff <= 0) || (currDiff < 0 && prevDiff >= 0)) {
				maxLength++;
				prevDiff = currDiff;
			}
		}

		return maxLength;
	}
};