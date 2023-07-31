#pragma once
#include "Student.h"
class LoadData
{
public:
	LoadData();
	~LoadData();
	virtual int read(Student stu[]);
};

