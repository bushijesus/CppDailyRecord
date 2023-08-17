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
		cout << "�ļ���ʧ��" << endl;
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
				cout << "�û�����������������¼�ɹ�" << endl;
				ofstream out("Admin.txt");
				if (out.is_open())
				{
					out << arr[1] << endl;
					out.close();
				}
				else
				{
					cout << "�޷�д���ļ�" << endl;
				}
			}
			else
			{
				cout << "��¼ʧ��" << endl;
			}
		}
		else if (arr[0] == "Logout")
		{
			ifstream inadmin("Admin.txt");
			string adminName;
			while (getline(inadmin, adminName))
			{
				cout << adminName << "�˳�ϵͳ" << endl;
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
					cout << "�����޸ĳɹ�" << endl;
				}
				else
				{
					cout << "�������벻һ��" << endl;
				}
			}
			else
			{
				cout << "�û������������" << endl;
			}
		}
		else if (arr[0] == "Msg")
		{
			auto now = chrono::system_clock::now();
			time_t time = chrono::system_clock::to_time_t(now);
			struct tm* nowTime = localtime(&time);
			char tmp[64];
			strftime(tmp, sizeof(tmp), "%Y-%m-%d-%H:%M:%S", nowTime);
			cout << tmp << "\t" << arr[1] << " ˵" << endl;
			cout << arr[2] << endl;
		}
		else
		{
			cout << "��ȡ����" << endl;
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