#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int n = nums.size();
		int count = 0; // Ҫɾ�����ظ�Ԫ������
		for (int i = 0; i < n - 1; ++i) {
			if (nums[i] == nums[i + 1]) {
				count++;
			}
		}
		nums.erase(unique(nums.begin(), nums.end()), nums.end()); // ʹ���㷨���е� erase-remove idiom ɾ���ظ�Ԫ��
		return n - count;
	}
};