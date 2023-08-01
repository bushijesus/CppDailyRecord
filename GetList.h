#pragma once
#include "Task.h"
class GetList :
	public Task
{
public:
	GetList(string& name);
	virtual void show();
private:
	string filename;
};

