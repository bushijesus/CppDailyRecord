#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution425 {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {
		sort(g.begin(), g.end());
		sort(s.begin(), s.end());
		int maxNum = 0;
		for (auto i = g.begin(); i != g.end(); ++i)
		{
			for (auto j = s.begin(); j != s.end(); ++j)
			{
				if (*j >= *i)
				{
					++maxNum;
					g.erase(j);
				}
			}
		}
		return maxNum;
	}
};