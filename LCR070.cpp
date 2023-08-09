#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class SolutionLCR070 {
public:
	int singleNonDuplicate(vector<int>& nums) {
		int eor = 0;
		int len = nums.size();
		for (int i = 0; i < len; ++i)
		{
			eor ^= nums[i];
		}
		return eor;
	}
};