#include "stdafx.h"
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int len = nums.size();
		vector<int> result(len, 1);
		int leftProduct = 1;
		for (int i = 0; i < len; ++i) {
			result[i] *= leftProduct;
			leftProduct *= nums[i];
		} 
		int rightProduct = 1;
		for (int i = len - 1; i >= 0; --i) {
			result[i] *= rightProduct;
			rightProduct *= nums[i];
		}

		return result;
	}
};