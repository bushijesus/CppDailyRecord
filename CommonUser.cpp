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
	cout << "�������û��������롢�û���Ŀ¼��Ȩ���б�" << endl;
	cin >> name >> passwd >> dir >> permList;
}

void CommonUser::write() const
{
	cout << "----------------------------------" << endl;
	cout << "�û�����Ϊ��\t" << feature << endl;
	cout << "�û���Ϊ��\t" << name << endl;
	cout << "����Ϊ��\t" << passwd << endl;
	cout << "�û���Ŀ¼Ϊ��\t" << dir << endl;
	cout << "Ȩ���б�Ϊ��\t" << permList << endl;
	cout << "----------------------------------" << endl;
}
