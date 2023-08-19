#include "stdafx.h"
#include <vector>
#include <set>
#include <iostream>
using namespace std;
class Solution4 {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int len1 = nums1.size();
		int len2 = nums2.size();

		multiset<int> sortedSet;
		for (int a : nums1) {
			sortedSet.insert(a);
		}
		for (int b : nums2) {
			sortedSet.insert(b);
		}

		int len = len1 + len2;
		auto it = sortedSet.begin();
		advance(it, len / 2);

		if (len % 2 == 1) {
			return *it;
		}
		else {
			double median1 = *it;
			double median2 = *prev(it);
			return (median1 + median2) / 2.0;
		}
	}
};