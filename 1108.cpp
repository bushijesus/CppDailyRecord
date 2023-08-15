#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution1108 {
public:
	string defangIPaddr(string address) {
		string s = "";
		for (int i = 0; i < address.length(); ++i)
		{
			if (address[i] == '.')
			{
				s += '[';
				s += address[i];
				s += ']';
			}
			else
			{
				s += address[i];
			}
		}
		return s;
	}
};