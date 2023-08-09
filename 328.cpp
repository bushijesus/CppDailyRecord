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
class Solution328 {
public:
	ListNode* oddEvenList(ListNode* head) {
		ListNode* p = head;
		int cnt = 1;
		while (p != nullptr && p->next != nullptr)
		{
			p = p->next;
			cnt++;
		}
		ListNode* q = head;
		ListNode* r = head->next;
		for (int i = 0; i < cnt / 2; ++i)
		{
			p->next = r;
			q->next = q->next->next;
			r->next = nullptr;
			q = q->next;
			r = r->next;
		}
		return head;
	}
};