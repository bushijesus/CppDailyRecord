#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
	bool robot(string command, vector<vector<int>>& obstacles, int x, int y) {
		vector<int> v{ 0, 0 };
		int lenOfStr = command.length();
		int lenOfObs = obstacles.size();
		for (int i = 0; i < lenOfStr; ++i)
		{
			if (command[i] = 'U')
			{
				v[0]++;
				for (int i = 0; i < lenOfObs; ++i)
				{
					if (v == obstacles[i])
					{
						return false;
					}
				}
			}
			if (command[i] = 'R')
			{
				v[1]++;
				for (int i = 0; i < lenOfObs; ++i)
				{
					if (v == obstacles[i])
					{
						return false;
					}
				}
			}
		}
		if (v[0] = x && v[1] == y)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};