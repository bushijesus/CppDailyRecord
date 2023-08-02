#pragma once
#include "User.h"
class RootUser :
	public User
{
public:
	RootUser();
	~RootUser();
	virtual void read();
	virtual void write() const;
};

