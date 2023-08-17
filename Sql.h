#pragma once
#include <string>
#include <vector>
using namespace std;

class Sql
{
public:
	Sql();
	void run(const string& filename);

	void split(const string& str, vector<string>& arr);

	string getFilename(const string& filename) const;
};


