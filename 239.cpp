#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

class Solution239 {
public:
	vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		// ³¬Ê±
		/*vector<int> v;
		for (int i = 0; i < nums.size() - k + 1; ++i)
		{
			int tmp = INT_MIN;
			for (int j = i; j < i + k; ++j)
			{
				tmp = nums[j] > tmp ? nums[j] : tmp;
			}
			v.push_back(tmp);
		}
		return v;*/
	}
};