#include "stdafx.h"
#include <iostream>
using namespace std;
class Solution326 {
public:
	bool isPowerOfThree(int n) {
		if (n == 0)
			return false;
		int i = 1;
		while (i < n) {
			if (i == n) {
				return true;
			}
			i *= 3;
		}
		return false;
	}
};