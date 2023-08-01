#pragma once
#include "Task.h"
class Upload :
	public Task
{
public:
	Upload(string& fname, string& uname);
	virtual void show();
private:
	string filename;
	string username;
};

