#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution27 {
public:
	int removeElement(vector<int>& nums, int val) {
		int slow = 0;
		for (int fast = 0; fast< nums.size(); ++fast)
		{
			if (nums[fast] != val)
			{
				nums[slow++] = nums[fast];
			}
		}
		return slow;
	}
};