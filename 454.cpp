#include "stdafx.h"
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution454 {
public:
	int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
		unordered_map<int, int> map;
		for (int n1 : nums1)
		{
			for (int n2 : nums2)
			{
				map[n1 + n2]++;
			}
		}
		int count = 0;
		for (int n3 : nums3)
		{
			for (int n4 : nums4)
			{
				if (map.find(0 - (n3 + n4)) != map.end())
				{
					count += map[0 - (n3 + n4)];
				}
			}
		}
		return count;
	}
};