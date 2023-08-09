#include "stdafx.h"
#include <stack>
#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution2130 {
public:
	int pairSum(ListNode* head) {
		int max = INT_MIN;
		ListNode* slow = head;
		ListNode* fast = head;
		while (fast->next != nullptr && fast->next->next != nullptr)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		stack<ListNode*> stack;
		ListNode* cur = slow->next;
		while (cur)
		{
			stack.push(cur);
			cur = cur->next;
		}
		cur = head;
		while (!stack.empty())
		{
			ListNode* top = stack.top();
			stack.pop();
			max = max > (cur->val + top->val) ? max : (cur->val + top->val);
			cur = cur->next;
		}
		return max;
	}
};