#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution929 {
	vector<string> split(string& emails){
		vector<string> s;
		string tmp;
		for (char c : emails)
		{
			if (c == '@')
			{
				s.push_back(tmp);
				tmp = "";
			}
			else
			{
				tmp += c;
			}
		}
		if (!tmp.empty())
		{
			s.push_back(tmp);
		}
		return s;
	}
public:
	int numUniqueEmails(vector<string>& emails) {
		vector<vector<string>> v;
		for (int i = 0; i < emails.size(); ++i)
		{
			v.push_back(split(emails[i]));
		}
		int count = v.size();
		for (int i = 0; i < v.size(); ++i)
		{
			int pos = v[i][0].find();
		}
	}
};