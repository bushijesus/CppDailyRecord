#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Solution43 {
public:
	string multiply(string num1, string num2) {
		int len1 = num1.size();
		int len2 = num2.size();
		int sum1 = 0;
		int sum2 = 0;
		int tmp = 1;
		for (int i = len1 - 1; i >= 0; --i) {
			int digit = num1[i] - '0';
			sum1 = digit * tmp + sum1;
			tmp *= 10;
		}
		tmp = 1;
		for (int i = len2 - 1; i >= 0; --i) {
			int digit = num2[i] - '0';
			sum2 = digit * tmp + sum2;
			tmp *= 10;
		}
		size_t product = sum1 * sum2;
		string result = to_string(product);
		return result;
	}
};