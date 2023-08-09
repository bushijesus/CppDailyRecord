#include "stdafx.h"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;
class Solution7 {
public:
	int reverse(int x) {
		int reversedNum = 0;
		int sign = 1;

		if (x < 0) {
			sign = -1;
			x = -x;
		}

		while (x != 0) {
			int digit = x % 10;
			reversedNum = reversedNum * 10 + digit;
			x /= 10;
		}
		if (reversedNum * sign <= 4294967295 && reversedNum * sign >= -4294967296)
		{
			return reversedNum * sign;

		}
		return 0;
	}
};