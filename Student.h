#pragma once
#include "TxtData.h"
#include <iostream>
using namespace std;

class Student
{
public:
	Student();
	Student(const char* name, char sex, int age);
	~Student();
	//friend int TxtData::read(Student stu[]);
	friend ostream& operator<<(ostream& out, const Student& stu);
	void setName(const char* name);
	void setSex(char sex);
	void setAge(int age);
	int getAge() const;
private:
	char* name;
	char sex;
	int age;
};

