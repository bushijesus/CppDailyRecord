#include "stdafx.h"
#include "String.h"
#include <cstring>
#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;

String::String()
{
	str = nullptr;
}

String::String(const char* s)
{
	int len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len+1, s);
}


String::~String()
{
	if (str) {
		delete[]str;
	}
}

void String::output() const
{
	if (str == nullptr) {
		return;
	}
	cout << str << endl;
}

char * String::cat(int s)
{
	assert(str);
	int len = strlen(str);
	char* tmp = new char[len + 20];
	strcpy_s(tmp, len + 1, str);
	char s_c[20] = "";
	sprintf_s(s_c, "%d", s);
	int len_s = strlen(s_c);
	strcat_s(tmp, len + len_s + 1, s_c);
	if (str != nullptr) {
		delete[]str;
	}
	str = tmp;
	return str;
}

char * String::cat(double s)
{
	assert(str);
	int len = strlen(str);
	char* tmp = new char[len + 20];
	strcpy_s(tmp, len + 1, str);
	char s_c[20] = "";
	sprintf_s(s_c, "%lf", s);
	int len_s = strlen(s_c);
	strcat_s(tmp, len + len_s + 1, s_c);
	if (str != nullptr) {
		delete[]str;
	}
	str = tmp;
	return str;
}

char * String::cat(const char * s)
{
	assert(str);
	int len = strlen(str) + strlen(s) + 1;
	strcat_s(str, len, s);
	return str;
}

bool String::equal(const char * s) const
{
	return strcmp(str, s) == 0;
}

bool String::equal(const String & other) const
{
	return strcmp(this->str, other.str) == 0;
}

void String::assign(const char * s)
{
	if (s == nullptr) {
		return;
	}
	int len = strlen(s) + 1;
	char* tmp = new char[len];
	strcpy_s(tmp, len, s);
	if (str != nullptr) {
		delete[]str;
	}
	str = tmp;
}

void String::assign(const String & other)
{
	assert(other.str);
	int len = strlen(other.str) + 1;
	char* tmp = new char[len];
	strcpy_s(tmp, len, other.str);
	if (str != nullptr) {
		delete[]str;
	}
	str = tmp;
}

int String::compare(const char * s) const
{
	assert(str && s);
	return strcmp(str, s);
}

int String::compare(const String & other) const
{
	assert(str && other.str);
	return strcmp(this->str, other.str);
}
