#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution709 {
public:
	string toLowerCase(string s) {
		for (int i = 0; i < s.length(); ++i)
		{
			if (isupper(s[i]))
			{
				s[i] = tolower(s[i]);
			}
		}
		return s;
	}
};