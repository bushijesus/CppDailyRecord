#include "Sql.h"
#include <iostream>
#include <fstream>
using namespace std;

Sql::Sql()
{
}

void Sql::run(const string& filename)
{
// 	ifstream file(filename);
// 	string line;
// 	string outfile = getFilename(filename);
// 	ofstream out(outfile);
// 
// 	out << "create table t_book(\n"
// 		<< "    name varchar(64),\n"
// 		<< "    auth varchar(64),\n"
// 		<< "    price decimal(10,2)\n"
// 		<< ");\n\n";
// 	while (getline(file, line))
// 	{
// 		vector<string> arr;
// 		split(line, arr);
// 		out << "insert into t_book values('"
// 			<< arr[0] << "','"
// 			<< arr[1] << "',"
// 			<< arr[2] << ");\n";
// 	}
// 	cout << "生成 " << outfile << endl;



	ifstream file(filename);      // 读取文件
	string line;
	string outfile = getFilename(filename);   
	ofstream out(outfile);        // 要写入的文件名
	out << "create table t_book(\n"
		<< "    name varchar(64),\n"
		<< "    auth varchar(64),\n"
		<< "    price decimal(10,2)\n"
		<< ");\n\n";
	while (getline(file, line))
	{
		vector<string> arr;
		split(line, arr);
		out << "insert into t_book values('"
			<< arr[0] << "','"
			<< arr[1] << "',"
			<< arr[2] << ");\n";
	}
}

void Sql::split(const string& str, vector<string>& arr)
{
// 	size_t left = 0, pos;
// 	while ((pos = str.find(";", left)) != string::npos)
// 	{
// 		arr.push_back(str.substr(left, pos - left));
// 		left = pos + 1;
// 	}
// 	if (left < str.size()) arr.push_back(str.substr(left));
	size_t left = 0, pos;
	while ((pos = str.find(";", left)) != string::npos)
	{
		arr.push_back(str.substr(left, pos - left));
		left = pos + 1;
	}
	if (left < str.size())
	{
		arr.push_back(str.substr(left));
	}
}

string Sql::getFilename(const string& filename) const
{
	size_t pos = filename.rfind(".");
	if (pos != string::npos) {
		return filename.substr(0, pos + 1) + "sql";
	}
	return filename + ".sql";
}

