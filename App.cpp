#include "stdafx.h"
#include "App.h"
#include "CommonUser.h"
#include "rootUser.h"
#include <iostream>
using namespace std;

App::App() : size(0)
{
}


App::~App()
{
}

void App::run()
{
	while (true)
	{
		cout << "1、添加用户  2、显示全部用户 3、退出系统" << endl;
		int choice;
		cin >> choice;
		if (choice == 1) addUser();
		else if (choice == 2) showUsers();
		else if (choice == 3) break;
		else cout << "输入错误，请重新输入" << endl;
	}
}

void App::addUser()
{
	cout << "请选择用户类别（1、普通用户 2、管理员用户）" << endl;
	int choice;
	cin >> choice;
	User* usr = selectUser(choice);
	if (usr == nullptr)
	{
		return;
	}
	usr->read();
	users[size++] = usr;
}

void App::showUsers() const
{
	for (int i = 0 ; i < size; ++i)
	{
		users[i]->write();
	}
}

User * App::selectUser(int n)
{
	if (n == 1) {
		return new CommonUser;
	}
	else if (n == 2) {
		return new RootUser;
	}
	else
		return nullptr;
}
