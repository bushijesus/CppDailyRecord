#pragma once
#include "User.h"
class CommonUser :
	public User
{
public:
	CommonUser();
	~CommonUser(); 
	virtual void read();
	virtual void write() const;
private:
	char dir[64];
	char permList[9];
};

