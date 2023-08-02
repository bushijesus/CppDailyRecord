#include "stdafx.h"
#include "rootUser.h"
#include <iostream>
using namespace std;

RootUser::RootUser()
{
	feature = 'S';
}


RootUser::~RootUser()
{
}

void RootUser::read()
{
	cout << "请输入用户名和密码" << endl;
	cin >> name >> passwd;
}

void RootUser::write() const
{
	cout << "----------------------------------" << endl;
	cout << "用户属性为：\t" << feature << endl;
	cout << "用户名为：\t" << name << endl;
	cout << "密码为：\t" << passwd << endl;
	cout << "----------------------------------" << endl;
}
