#include "stdafx.h"
#include <iostream>
using namespace std;
class Solution461 {
public:
	int hammingDistance(int x, int y) {
			int eor = x ^ y;
			long long int num = 0;
			while (eor > 0)
			{
				num += (eor & 1);
				eor >>= 1;
			}
			return num;
	}
};