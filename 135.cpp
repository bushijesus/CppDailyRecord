#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution135 {
public:
	int candy(vector<int>& ratings) {
		vector<int> candy(ratings.size(), 1);
		int sum = 0;
		// ��ǰ����
		for (int i = 1; i < ratings.size(); ++i)
		{
			if (ratings[i] > ratings[i - 1])
			{
				candy[i] = candy[i - 1] + 1;
			}
		}
		// �Ӻ���ǰ
		for (int i = ratings.size() - 2; i >= 0; --i)
		{
			if (ratings[i] > ratings[i + 1])
			{
				candy[i] = max(candy[i], candy[i + 1] + 1);
			}
		}
		// �������
		for (int a : candy)
		{
			sum += a;
		}
		return sum;
	}
};