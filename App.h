#pragma once
#include "User.h"
class App
{
public:
	App();
	~App();
	void run();
private:
	void addUser();
	void showUsers() const;
	User* selectUser(int n);
private:
	User* users[1024];
	int size;
};

