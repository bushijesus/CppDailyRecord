#include "stdafx.h"
#include <iostream>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution19 {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* dummy = new ListNode(0);
		dummy->next = head;
		ListNode* slow = dummy;
		ListNode* fast = dummy;
		for (int i = 0; i < n; ++i)
		{
			fast = fast->next;
		}
		while (fast != nullptr)
		{
			slow = slow->next;
			fast = fast->next;
		}
		ListNode* toDel = slow->next;
		slow->next = slow->next->next;
		delete toDel;
		ListNode* ret = dummy->next;
		delete dummy;
		return ret;

	}
};