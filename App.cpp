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
		cout << "1������û�  2����ʾȫ���û� 3���˳�ϵͳ" << endl;
		int choice;
		cin >> choice;
		if (choice == 1) addUser();
		else if (choice == 2) showUsers();
		else if (choice == 3) break;
		else cout << "�����������������" << endl;
	}
}

void App::addUser()
{
	cout << "��ѡ���û����1����ͨ�û� 2������Ա�û���" << endl;
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
