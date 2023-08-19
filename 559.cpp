#include "stdafx.h"
#include <queue>
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

// µ›πÈ
//class Solution559 {
//public:
//    int maxDepth(Node* root) {
//        if (root == nullptr) return 0;
//        int max_depth = 0;
//        for (int i = 0; i < root->children.size(); ++i)
//        {
//            max_depth = max(max_depth, maxDepth(root->children[i]));
//        }
//        return max_depth + 1;
//    }
//};

// ≤„–Ú
class Solution559 {
public:
	int maxDepth(Node* root) {
		if (root == nullptr) return 0;
		int max_depth = 0;
        queue<Node*> que;
        que.push(root);
        while (!que.empty())
        {
            int size = que.size();
            for (int i = 0; i < size; ++i)
            {
                Node* node = que.front();
                que.pop();
                for (int j = 0; j < node->children.size(); ++j)
                {
                    if (node->children[i])
                    {
						que.push(node->children[i]);
                    }
                }
            }
			max_depth++;
        }
        return max_depth;
	}
};