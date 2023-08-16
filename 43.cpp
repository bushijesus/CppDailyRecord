#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Solution43 {
public:
	string multiply(string num1, string num2) {
		int n1 = stoi(num1);
		int n2 = stoi(num2);
		int res = n1 * n2;
		string s = to_string(res);
		return s;
	}
};