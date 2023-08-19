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

class Solution110 {
	int getHeight(TreeNode* root) {
		if (root == nullptr) {
			return 0;
		}
		// 左
		int leftHeight = getHeight(root->left);
		if (leftHeight == -1) {
			return-1;
		}
		// 右
		int rightHeight = getHeight(root->right);
		if (rightHeight == -1) {
			return-1;
		}
		// 中
		int result;
		if (abs(leftHeight - rightHeight) > 1) {
			result = -1;
		}
		else {
			result = 1 + max(leftHeight, rightHeight);
		}
		return result;
	}
public:
	bool isBalanced(TreeNode* root) {
		return getHeight(root) != -1;
	}
};