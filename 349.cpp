#include "stdafx.h"
#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

class Solution349 {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_set<int> result;
		unordered_set<int> numscmp(nums1.begin(), nums1.end());
		for (int num : nums2)
		{
			if (numscmp.find(num) != numscmp.end())
			{
				result.insert(num);
			}
		}
		return vector<int>(result.begin(), result.end());
	}
};