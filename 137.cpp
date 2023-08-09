#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
int singleNumber(vector<int>& nums) {
	int res = 0;
	for (int n : nums) {
		res ^= n;
	}
	int mask = 1;
	while ((mask & res) == 0) {
		mask <<= 1;
	}
	int a = 0, b = 0;
	for (int n : nums) {
		if (n & mask) {
			a ^= n;
		}
		else {
			b ^= n;
		}
	}
	return a == 0 ? b : a;
}