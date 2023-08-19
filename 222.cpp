#include "stdafx.h"
#include <queue>
#include <iostream>
using namespace std;

// 定义二叉树结点
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


// 层序

//class Solution222 {
//public:
//	int countNodes(TreeNode* root) {
//		if (root == nullptr) return 0;
//		queue<TreeNode*> que;
//		int count = 1;
//		que.push(root);
//		while (!que.empty())
//		{
//			int size = que.size();
//			for (int i = 0; i < size; ++i)
//			{
//				TreeNode* node = que.front();
//				que.pop();
//				if (node->left) {
//					que.push(node->left);
//					count++;
//				}
//				if (node->right) {
//					que.push(node->right);
//					count++;
//				}
//			}
//		}
//		return count;
//	}
//};


// 递归
class Solution222 {
public:
	int countNodes(TreeNode* root) {
		if (root == nullptr) return 0;
		int leftNum = countNodes(root->left);
		int rightNum = countNodes(root->right);
		return leftNum + rightNum + 1;
	}
};