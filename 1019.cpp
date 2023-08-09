#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution1019 {
public:
	vector<int> nextLargerNodes(ListNode* head) {
		vector<int> v;
		ListNode* cur = head;
		while (cur != nullptr)
		{
			ListNode* cmp = cur->next;
			int max = cur->val;
			while (cmp != nullptr)
			{
				max = cmp->val > max ? cmp->val : max;
				cmp = cmp->next;
			}
			if (max > 0)
			{
				v.push_back(max);
			}
			else
			{
				v.push_back(0);
			}
			cur = cur->next;
		}
		return v;
	}
};