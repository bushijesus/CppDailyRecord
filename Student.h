#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	friend class cmpStu;
	Student();
	Student(const char *name, int age);
	~Student();
	friend ostream &operator<<(ostream &out, const Student &stu);
private:
	char name[16];
	int  age;
};

