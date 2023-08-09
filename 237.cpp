#include "stdafx.h"
#include <iostream>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;   
	ListNode(int x) : val(x), next(NULL) {}
 };

class Solution237 {
public:
	void deleteNode(ListNode* node) {
		if (node == nullptr || node->next == nullptr) {
			return; // 无法删除最后一个结点
		}

		ListNode* nextNode = node->next;
		node->val = nextNode->val;
		node->next = nextNode->next;
		delete nextNode;
	}
};