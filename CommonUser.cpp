#include "stdafx.h"
#include "CommonUser.h"
#include <iostream>
using namespace std;

CommonUser::CommonUser()
{
	feature = 'C';
}


CommonUser::~CommonUser()
{
}

void CommonUser::read()
{
	cout << "请输入用户名、密码、用户主目录和权限列表" << endl;
	cin >> name >> passwd >> dir >> permList;
}

void CommonUser::write() const
{
	cout << "----------------------------------" << endl;
	cout << "用户属性为：\t" << feature << endl;
	cout << "用户名为：\t" << name << endl;
	cout << "密码为：\t" << passwd << endl;
	cout << "用户主目录为：\t" << dir << endl;
	cout << "权限列表为：\t" << permList << endl;
	cout << "----------------------------------" << endl;
}
