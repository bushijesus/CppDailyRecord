#pragma once
#include <iostream>
using namespace std;

class String
{
public:
	String(const char* str = nullptr);
	~String();
	String& operator+= (const String& other);
	String operator+ (const String& other);
	String operator* (int times);
	char operator[](int index);
	const char operator[](int index) const;
	bool operator !=(const String& other);
	bool operator ==(const String& other);
	friend ostream& operator<<(ostream& out, const String& other);
	friend istream& operator>>(istream& in, const String& other);
	char* c_str() const;
	char at(int index) const;
	char front() const;
	char back() const;
	bool empty() const;
	int size() const;
	void erase(int index);
	void clear();
	void pop_back();
	String substr(int index, int count) const;

private:
	char* data;
};

