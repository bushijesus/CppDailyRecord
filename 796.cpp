#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Solution796 {
public:
	bool rotateString(string s, string goal) {
		for (int i = 0; i < s.size(); ++i)
		{
			reverse(s.begin() + 1, s.end());
			reverse(s.begin(), s.end());
			if (s == goal)
			{
				return true;
			}
		}
		return false;
	}
};