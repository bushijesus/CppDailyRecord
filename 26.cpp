#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution26 {
public:
	int removeDuplicates(vector<int>& nums) {
		int n = nums.size();
		int count = 0;
		auto iter = nums.begin();

		while (iter != nums.end()) {
			auto nextIter = next(iter);

			if (nextIter != nums.end() && *iter == *nextIter) {
				iter = nums.erase(iter);
				count++;
			}
			else {
				++iter;
			}
		}

		return n - count;
	}
};