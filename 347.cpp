#include "stdafx.h"
#include <vector>
#include <unordered_map>
#include <iostream>
#include <queue>
using namespace std;

class myCmp {
public:
	bool operator()(const pair<int, int>& l, const pair<int, int>& r) {
		return l.second > r.second;      // 建立小顶堆
	}
};
class Solution347 {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		unordered_map<int, int> map;
		// 统计元素出现频率
		for (int i = 0; i < nums.size(); ++i)
		{
			map[nums[i]]++;
		}

		// 对频率排序
		// 定义一个小顶堆
		priority_queue<pair<int, int>, vector<pair<int, int>>, myCmp> pq;
		// 用大小为k的小顶堆，扫描所有频率的数值
		for (unordered_map<int, int>::iterator it = map.begin(); it != map.end(); ++it)
		{
			pq.push(*it);
			if (pq.size() > k)
			{
				pq.pop();
			}
		}
		// 找出前k个高频元素，因为小顶堆先弹出最小的，所以倒序输出数组
		vector<int> result(k);
		for (int i = k - 1; i >= 0; --i)
		{
			result[i] = pq.top().first;
			pq.pop();
		}
		return result;
	}
};