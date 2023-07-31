#include "stdafx.h"
#include "App.h"


App::App()
{
}


App::~App()
{
}

void App::run(LoadData * p)
{
	if (p == nullptr) {
		return;
	}
	pos = p->read(stu);
	if (pos <= 0)
	{
		return;
	}
	int sum_age = 0;
	for (int i = 0; i < pos; ++i)
	{
		cout << stu[i];
		sum_age += stu[i].getAge();
	}
	cout << "平均年龄为：" << sum_age / pos << endl;
}
