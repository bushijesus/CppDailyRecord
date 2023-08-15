#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class SolutionOffer05 {
public:
	string replaceSpace(string s) {
		int count_space = 0;
		int oldSize = s.size();
		for (auto i : s)
		{
			if (i == ' ')
			{
				count_space++;
			}
		}
		int newSize = oldSize + count_space * 2;
		s.resize(newSize);
		for (int i = newSize - 1, j = oldSize - 1; j < i; j--,i--)
		{
			if (s[j] != ' ')
			{
				s[i] = s[j];
			}
			else
			{
				s[i] = '0';
				s[i - 1] = '2';
				s[i - 2] = '%';
				i -= 2;
			}
		}
		return s;
	}
};