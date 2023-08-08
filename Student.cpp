#include "stdafx.h"
#include "Student.h"


Student::Student()
{
}

Student::Student(const char * name, int age)
{
	strcpy_s(this->name, name);
	this->age = age;
}


Student::~Student()
{
}

ostream &operator<<(ostream &out, const Student &stu)
{
	out << stu.name << "\t"
		<< stu.age;
	return out;
}