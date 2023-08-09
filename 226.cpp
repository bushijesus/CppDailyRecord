#include "stdafx.h"
#include <stack>
#include <iostream>
using namespace std;

// 定义二叉树结点
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr){}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution226 {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (root == nullptr) {
			return nullptr;
		}

		// 递归地反转左右子树
		TreeNode* left = invertTree(root->left);
		TreeNode* right = invertTree(root->right);

		// 交换左右子树
		root->left = right;
		root->right = left;

		return root;
	}
};