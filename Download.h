#pragma once
#include "Task.h"
class Download :
	public Task
{
public:
	Download(string& fname, int t);
	virtual void show();
private:
	string filename;
	int times;
};

