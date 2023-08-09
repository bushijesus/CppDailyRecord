#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
class Solution11 {
public:
	int maxArea(vector<int>& height) {
		int max = 0;
		int min = 0;
		for (vector<int>::iterator it = height.begin(); it != height.end(); ++it)
		{
			for (vector<int>::iterator iit = it + 1; iit != height.end(); ++iit)
			{
				min = (*it) < (*iit) ? (*it) : (*iit);
				max = max > min * (iit - it) ? max : min * (iit - it);
			}
		}
		return max;
	}
};