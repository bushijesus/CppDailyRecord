#include "Parser.h"
#include <fstream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void Parser::run()
{
	ifstream in("info.txt");
	if (!in.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	string line;
	while (getline(in, line))
	{
		vector<string> arr;
		split(line, arr);
		if (arr[0] == "Login")
		{
			if (arr[1] == "admin" && arr[2] == "1234")
			{
				cout << "用户名和密码正常，登录成功" << endl;
				ofstream out("Admin.txt");
				if (out.is_open())
				{
					out << arr[1] << endl;
					out.close();
				}
				else
				{
					cout << "无法写入文件" << endl;
				}
			}
			else
			{
				cout << "登录失败" << endl;
			}
		}
		else if (arr[0] == "Logout")
		{
			ifstream inadmin("Admin.txt");
			string adminName;
			while (getline(inadmin, adminName))
			{
				cout << adminName << "退出系统" << endl;
			}
			inadmin.close();
		}
		else if (arr[0] == "edit")
		{
			if (arr[1] == "admin" && arr[2] == "1234")
			{
				if (arr[3] == arr[4])
				{
					arr[1] = arr[3];
					cout << "密码修改成功" << endl;
				}
				else
				{
					cout << "两次密码不一致" << endl;
				}
			}
			else
			{
				cout << "用户名或密码错误" << endl;
			}
		}
		else if (arr[0] == "Msg")
		{
			auto now = chrono::system_clock::now();
			time_t time = chrono::system_clock::to_time_t(now);
			struct tm* nowTime = localtime(&time);
			char tmp[64];
			strftime(tmp, sizeof(tmp), "%Y-%m-%d-%H:%M:%S", nowTime);
			cout << tmp << "\t" << arr[1] << " 说" << endl;
			cout << arr[2] << endl;
		}
		else
		{
			cout << "读取错误" << endl;
		}
	}
	in.close();
}

void Parser::split(const string& str, vector<string>& arr)
{
	stringstream ss(str);
	string item;
	while (getline(ss, item, ','))
	{
		arr.push_back(item);
	}
}