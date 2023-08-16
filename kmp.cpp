#include <string>
#include <vector>
#include <iostream>
using namespace std;

// ÇónextÊý×é
void get_next(vector<int> next, const string& s) {
	int j = 0;
	next[0] = 0;
	for (int i = 1; i < s.size(); ++i) {
		while (j > 0 && s[i] != s[j])
		{
			j = next[j - 1];
		}
		if (s[i] == s[j])
		{
			j++;
		}
		next[i] = j;
	}
}

int strStr(string haystack, string needle) {
	if (needle.size() == 0) return 0;
	vector<int> next(needle.size(), 0);
	get_next(next, needle);
	int j = 0;
	for (int i = 0; i <haystack.size(); ++i)
	{
		while (j > 0 && haystack[i] != needle[i])
		{
			j = next[j - 1];
		}
		if (haystack[i] == needle[i])
		{
			j++;
		}
		if (j == needle.size())
		{
			return (i - needle.size() + 1);
		}
	}
	return -1;
}

//int main() {
//	string s = "";
//	string test = "a26sgs";
//	for (int i = 0; i < test.size(); ++i)
//	{
//		if (isdigit(test[i]))
//		{
//			s += test[i];
//		}
//	}
//	cout << s;
//	return 0;
//}