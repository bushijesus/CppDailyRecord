#include "stdafx.h"
#include <vector>
#include <map>
#include <iostream>
using namespace std;

class Solution350 {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int> result;
		multimap<int, int> map1;
		// 遍历数组1
		for (int i : nums1)
		{
			auto iter = map1.find(i);
			if (iter != map1.end())
			{
				iter->second++;
			}
			else
			{
				pair<int, int> value(i, 1);
				map1.insert(value);
			}
		}
		// 遍历数组2
		for (int i : nums2)
		{
			auto iter = map1.find(i);
			if (iter != map1.end() && iter->second > 0)
			{
				iter->second -= 1;
				result.push_back(i);
			}
		}
		return result;
	}
};