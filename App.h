#pragma once
#include "Task.h"
#include <vector>
class App
{
public:
	App();
	~App();
	void run();
	void addTask(Task* task);
	void showTask() const;
private:
	vector<Task*> tasks;
};

