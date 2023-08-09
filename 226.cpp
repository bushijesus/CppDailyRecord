#include "stdafx.h"
#include <stack>
#include <iostream>
using namespace std;

// ������������
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

		// �ݹ�ط�ת��������
		TreeNode* left = invertTree(root->left);
		TreeNode* right = invertTree(root->right);

		// ������������
		root->left = right;
		root->right = left;

		return root;
	}
};