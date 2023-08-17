#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Solution17 {
	vector<string> result;
	string path;
	const string letterMap[10] = {
		"",
		"",
		"abc",
		"def",
		"ghi",
		"jkl",
		"mno",
		"pqrs",
		"tuv",
		"wxyz"
	};
	void backtracking(const string& digits, int index) {    // index用来记录当前遍历到第几个数字
		if (index == digits.size())
		{
			result.push_back(path);
			return;
		}
		int sub = digits[index] - '0';
		string letters = letterMap[sub];
		for (int i = 0; i < letters.size(); ++i)
		{
			path.push_back(letters[i]);
			backtracking(digits, index + 1);
			path.pop_back();
		}
	}
public:
	vector<string> letterCombinations(string digits) {
		if (digits.size() == 0)
		{
			return result;
		}
		backtracking(digits, 0);
		return result;
	}
};