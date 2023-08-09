#include "stdafx.h"
#include <string>
#include <unordered_set>
#include <iostream>
using namespace std;

class SolutionLCR032 {
public:
	bool isAnagram(string s, string t) {
		if (s.length() != t.length())
		{
			return false;
		}
		unordered_set<char, int> u1, u2;
	}
};