#include "stdafx.h"
#include <vector>
#include <unordered_map>
#include <iostream>
#include <queue>
using namespace std;

class myCmp {
public:
	bool operator()(const pair<int, int>& l, const pair<int, int>& r) {
		return l.second > r.second;      // ����С����
	}
};
class Solution347 {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		unordered_map<int, int> map;
		// ͳ��Ԫ�س���Ƶ��
		for (int i = 0; i < nums.size(); ++i)
		{
			map[nums[i]]++;
		}

		// ��Ƶ������
		// ����һ��С����
		priority_queue<pair<int, int>, vector<pair<int, int>>, myCmp> pq;
		// �ô�СΪk��С���ѣ�ɨ������Ƶ�ʵ���ֵ
		for (unordered_map<int, int>::iterator it = map.begin(); it != map.end(); ++it)
		{
			pq.push(*it);
			if (pq.size() > k)
			{
				pq.pop();
			}
		}
		// �ҳ�ǰk����ƵԪ�أ���ΪС�����ȵ�����С�ģ����Ե����������
		vector<int> result(k);
		for (int i = k - 1; i >= 0; --i)
		{
			result[i] = pq.top().first;
			pq.pop();
		}
		return result;
	}
};