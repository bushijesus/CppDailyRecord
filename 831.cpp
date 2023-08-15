#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution831 {
public:
	string maskPII(string s) {
		string mask = "";
		int pos = s.find('@');
		if (pos != string::npos)
		{
			for (int i = 0; i < s.length(); ++i)
			{
				if (isupper(s[i]))
				{
					s[i] = tolower(s[i]);
				}
			}
			// ÓÊÏä
			mask += s[0];
			mask += "*****";
			mask += s[pos - 1];
			mask += '@';
			mask += s.substr(pos + 1);

		}
		else
		{
			// µç»°
			int numOfDigit = 0;
			string phonenum = "";
			for (auto i : s)
			{
				if (isdigit(i))
				{
					phonenum += i;
					numOfDigit++;
				}
			}
			switch (numOfDigit)
			{
			case 10:
				mask += "***-***-";
				mask += phonenum.substr(6, 4);
				break;
			case 11:
				mask += "+*-***-***-";
				mask += phonenum.substr(7, 4);
				break;
			case 12:
				mask += "+**-***-***-";
				mask += phonenum.substr(8, 4);
				break;
			case 13:
				mask += "+***-***-***-";
				mask += phonenum.substr(9, 4);
				break;
			default:
				break;
			}
		}
		return mask;
	}
};