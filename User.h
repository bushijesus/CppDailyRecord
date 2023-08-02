#pragma once
class User
{
public:
	User();
	~User();
	virtual void read();
	virtual void write() const;
protected:
	char feature;
	char name[32];
	char passwd[32];
};

