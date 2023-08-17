#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class Solution209 {
public:
	int minSubArrayLen(int target, vector<int>& nums) {
		// ��������
		int result = INT_MAX;
		int subLength = 0; // �����г���
		int i = 0;   // ����������ʼλ��
		long long int sum = 0; // ��������ֵ֮��
		for (int j = 0; j < nums.size(); ++j)
		{
			sum += nums[j];
			while (sum >= target)
			{
				subLength = j - i + 1;
				result = result < subLength ? result : subLength;
				sum -= nums[i++];
			}
		}
		return result == INT_MAX ? 0 : result;
	}
};