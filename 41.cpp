#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
	int findMissingPositive(vector<int>& nums) {
		int n = nums.size();

		// ��һ�α�������ÿ������ x �ŵ������±�Ϊ x-1 ��λ����
		for (int i = 0; i < n; ++i) {
			while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
				swap(nums[i], nums[nums[i] - 1]);
			}
		}

		// �ڶ��α�����Ѱ�ҵ�һ��λ�� i��ʹ�� nums[i] != i+1
		for (int i = 0; i < n; ++i) {
			if (nums[i] != i + 1) {
				return i + 1;
			}
		}

		// ��������е�����������ȷ�����ڶ�Ӧλ���ϣ���ȱʧ�ĵ�һ������Ϊ n+1
		return n + 1;
	}
};