#include "stdafx.h"
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution977 {
public:
	vector<int> sortedSquares(vector<int>& nums) {
		for (int i = 0; i <nums.size(); ++i)
		{
			nums[i] = pow(nums[i], 2);;
		}
		sort(nums.begin(), nums.end());
		return nums;
	}
};