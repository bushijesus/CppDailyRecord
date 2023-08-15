#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution144 {
	void  traversal(TreeNode* cur, vector<int>& vec) {
		if (cur == nullptr) return;
		vec.push_back(cur->val);
		traversal(cur->left, vec);
		traversal(cur->right, vec);
	}
public:
    vector<int> preorderTraversal(TreeNode* root) {
		vector<int> v;
		traversal(root, v);
		return v;
    }
};