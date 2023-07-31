#include "stdafx.h"
#include "TxtData.h"
#include "Student.h"
#include <cstdio>

TxtData::TxtData()
{
	fopen_s(&fp, "C:\\Users\\Administrator\\Desktop\\data.txt", "r");
}


TxtData::~TxtData()
{
	if (fp) {
		fclose(fp);
	}
}

int TxtData::read(Student stu[])
{
	if (fp == nullptr)
	{
		return -1;
	}
	int cnt = 0;

	char buf_name[64];
	char buf_sex;
	int buf_age;
	while (fscanf_s(fp, "%s %c %d", buf_name, sizeof(buf_name), &buf_sex, 1, &buf_age) == 3) {
		printf("%s %c %d\n", buf_name, buf_sex, buf_age);
		Student s(buf_name, buf_sex, buf_age);
		stu[cnt++] = s;
	}
	return cnt;
}
