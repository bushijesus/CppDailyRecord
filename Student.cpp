#include "stdafx.h"
#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;


Student::Student()
{
	name = nullptr;
	sex = 'X';
	age = 0;
}

Student::Student(const char * name, char sex, int age)
{
	int len = strlen(name) + 1;
	this->name = new char[len];
	strcpy_s(this->name, len, name);
	this->sex = sex;
	this->age = age;
}

Student::~Student()
{
	if (name) {
		delete[] name;
	}
}

void Student::setName(const char* name)
{
	int len = strlen(name) + 1;
	this->name = new char[len];
	strcpy_s(this->name, len, name);
}

void Student::setSex(char sex)
{
	this->sex = sex;
}

void Student::setAge(int age)
{
	this->age = age;
}

int Student::getAge() const
{
	return this->age;
}

ostream& operator<<(ostream & out, const Student & stu)
{
	out << "姓名：" << stu.name << "\t性别：" << stu.sex << "\t年龄：" << stu.age << endl;
	return out;
}
