#pragma once
class String
{
public:
	String();
	String(const char* s);
	~String();
	void output()const;
	char* cat(int s);
	char* cat(double s);
	char* cat(const char * s);
	bool equal(const char * s)const;
	bool equal(const String& other)const;
	void assign(const char * s);
	void assign(const String& other);
	int compare(const char * s)const;
	int compare(const String& other)const;
private:
	char * str;
};

