#include "stdafx.h"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;
class Solution1680 {
public:
	int concatenatedBinary(int n) {
		string s;
		for (int i = 1; i < n; ++i) {
			while (i > 0) {
				s = char(i % 2 + '0') + s;
				i /= 2;
			}
		}
		int num = 0;
		int i = 0;
		for (auto it = s.end() - 1; it != s.begin(); --it)
		{
			num += (int)(*it) * pow(2, i);
			++i;
		}
		int mod = pow(10, 9) + 7;
		return num % mod;
	}
};
