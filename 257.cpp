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

class Solution257 {
public:
	vector<string> binaryTreePaths(TreeNode* root) {

	}
};