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
	cout << "�������û���������" << endl;
	cin >> name >> passwd;
}

void RootUser::write() const
{
	cout << "----------------------------------" << endl;
	cout << "�û�����Ϊ��\t" << feature << endl;
	cout << "�û���Ϊ��\t" << name << endl;
	cout << "����Ϊ��\t" << passwd << endl;
	cout << "----------------------------------" << endl;
}
