#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
//class Solution283 {
//public:
//	void moveZeroes(vector<int>& nums) {
//		int len = nums.size();
//		for (int i = 0; i < len - 1; ++i)
//		{
//			for (int j = 0; j < len - i - 1; ++j)
//			{
//				if (nums[j] == 0)
//				{
//					int tmp = nums[j + 1];
//					nums[j + 1] = nums[j];
//					nums[j] = tmp;
//				}
//			}
//		}
//	}
//};


class Solution283 {
public:
	void moveZeroes(vector<int>& nums) {
		int len = nums.size();
		for (int i = 0; i < len - 1; ++i)
		{
			for (int j = 0; j < len - i - 1; ++j)
			{
				if (nums[j] == 0)
				{
					int tmp = nums[j + 1];
					nums[j + 1] = nums[j];
					nums[j] = tmp;
				}
			}
		}
	}
};