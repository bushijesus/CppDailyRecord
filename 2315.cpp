#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
class Solution2315 {
public:
	int countAsterisks(string s) {
		int flag = 1;
		int count = 0;
		int len = s.length();
		for (int i = 0; i < len; ++i)
		{
			if (s[i] == '|')
			{
				flag++;
			}
			if (flag % 2 == 1)
			{
				if (s[i] == '*')
				{
					count++;
				}
			}
		}
		return count;
	}
};