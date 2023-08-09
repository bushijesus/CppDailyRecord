#include "stdafx.h"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;
class Solution233 {
public:
	int countDigitOne(int n) {
		if (n <= 0)
		{
			return 0;
		}
		int i = 0;
		int numOf1 = 0;
		for (int i = 1; i <= n; ++i)
		{
			while (i > 0)
			{
				if (i & 1)
				{
					numOf1++;
				}
				i >>= 1;
			}
		}
		return numOf1;
	}
};