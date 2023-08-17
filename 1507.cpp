#include "stdafx.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
class Solution1507 {
	// ·Ö¸î×Ö·û´®º¯Êý
	vector<string> split(const string& s, char delim) {

		vector<string> tokens;
		string tmp;

		for (char c : s) {
			if (c == delim) {
				tokens.push_back(tmp);
				tmp = "";
			}
			else {
				tmp += c;
			}
		}

		if (!tmp.empty()) {
			tokens.push_back(tmp);
		}
		return tokens;
	}
public:
	string reformat(string date) {

		// ÔÂ·ÝÓ³Éä
		unordered_map<string, string> monthMap{
			{ "Jan", "01" },
			{ "Feb", "02" },
			{ "Mar", "03" },
			{ "Apr", "04" },
			{ "May", "05" },
			{ "Jun", "06" },
			{ "Jul", "07" },
			{ "Aug", "08" },
			{ "Sep", "09" },
			{ "Oct", "10" },
			{ "Nov", "11" },
			{ "Dec", "12" },
		};

		vector<string> parts = split(date, ' ');

		string year = parts[2];

		string month = monthMap[parts[1]];

		int day = stoi(parts[0]);
		string dayStr = day < 10 ? "0" + to_string(day) : to_string(day);

		return year + "-" + month + "-" + dayStr;

	}
};
