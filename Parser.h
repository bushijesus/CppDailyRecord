#pragma once
#include <vector>
#include <string>
using namespace std;
class Parser
{
public:
	void run();
	void split(const string& str, vector<string>& arr);
};

