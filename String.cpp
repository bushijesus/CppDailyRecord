#include "stdafx.h"
#include "String.h"
#include <cstring>
#include <algorithm>

String::String(const char * str)
{
	if (str != nullptr)
	{
		int len = strlen(str) + 1;
		data = new char[len];
		strcpy_s(data, len, str);
	}
	else
	{
		data = nullptr;
	}
}

String::~String()
{
	if (data)
	{
		delete[] data;
		data = nullptr;
	}
}

String & String::operator+=(const String & other)
{
	if (other.data == nullptr)
	{
		return *this;
	}
	if (data == nullptr)
	{
		int len = strlen(other.data) + 1;
		data = new char[len];
		strcpy_s(data, len, other.data);
		return *this;
	}
	int len = strlen(data) + strlen(other.data) + 1;
	char* tmp = new char[len];
	strcpy_s(tmp, len, data);
	strcat_s(tmp, len, other.data);
	delete[] data;
	data = tmp;
	return *this;
}

String String::operator+(const String& other)
{
	String tmp;
	if (data == nullptr && other.data == nullptr)
	{
		return tmp;
	}

	int len1 = (data != nullptr) ? strlen(data) : 0;
	int len2 = (other.data != nullptr) ? strlen(other.data) : 0;
	int len = len1 + len2 + 1;
	char* temp = new char[len];
	if (data != nullptr) {
		strcpy_s(temp, len, data);
	}
	if (other.data != nullptr) {
		strcat_s(temp, len, other.data);
	}
	tmp.data = temp;

	return tmp;
}

String String::operator*(int times)
{
	String tmp;
	for (int i = 0; i < times; ++i)
	{
		tmp += *this;
	}
	return tmp;
}

char String::operator[](int index)
{
	int len = strlen(data);
	if (index >= len)
	{
		throw "invalid index";
	}
	return data[index];
}

const char String::operator[](int index) const
{
	int len = strlen(data);
	if (index >= len)
	{
		throw "invalid index";
	}
	return data[index];
}

bool String::operator!=(const String & other)
{
	if (data == nullptr && other.data == nullptr)
	{
		return false;
	}
	else if (data == nullptr || other.data == nullptr)
	{
		return true;
	}
	else
	{
		return strcmp(data, other.data) != 0;
	}
}

bool String::operator==(const String & other)
{
	if (data == nullptr && other.data == nullptr)
	{
		return true;
	}
	else if (data == nullptr || other.data == nullptr)
	{
		return false;
	}
	else
	{
		return strcmp(data, other.data) == 0;
	}
}

char * String::c_str() const
{
	return data;
}

char String::at(int index) const
{
	int len = strlen(data);
	if (index >= len)
	{
		throw "invalid index";
	}
	return data[index];
}

char String::front() const
{
	if (data == nullptr)
	{
		throw "there is not any data";
	}
	return data[0];
}

char String::back() const
{
	if (data == nullptr)
	{
		throw "there is not any data";
	}
	return data[strlen(data) - 1];
}

bool String::empty() const
{
	return data == nullptr;
}

int String::size() const
{
	if (data == nullptr)
	{
		return 0;
	}
	else
	{
		return strlen(data);
	}
}

void String::erase(int index)
{
	if (data == nullptr)
	{
		cout << "empty object";
		return;
	}

	int len = strlen(data);
	if (index < 0 || index >= len)
	{
		throw "invalid index";
	}

	char* tmp = new char[len];
	for (int i = 0; i < index; ++i)
	{
		tmp[i] = data[i];
	}
	for (int i = index; i < len - 1; ++i)
	{
		tmp[i] = data[i + 1];
	}
	tmp[len - 1] = '\0';

	delete[] data;
	data = tmp;
}

void String::clear()
{
	if (data != nullptr)
	{
		delete[]data;
		data = nullptr;
	}
}

void String::pop_back()
{
	int len = strlen(data);
	char* tmp = new char[len];
	for (int i = 0; i < len - 1; ++i)
	{
		tmp[i] = data[i];
	}
	tmp[len - 1] = '\0';
	delete[]data;
	data = tmp;
}

String String::substr(int index, int count) const
{
	if (index < 0 || count < 0)
	{
		throw "invalid arguments";
	}

	int len = strlen(data);
	if (index >= len)
	{
		throw "index out of range";
	}
	count = min(count, len - index);
	String tmp;
	tmp.data = new char[count];
	for (int i = 0; i < count; ++i)
	{
		tmp.data[i] = data[index + i];
	}
	tmp.data[count] = '\0';

	if (tmp.data == nullptr)
	{
		throw "memory allocation failed";
	}

	return tmp;
}

ostream & operator<<(ostream & out, const String & other)
{
	if (other.data != nullptr)
	{
		out << other.data << endl;
	}
	return out;
}

istream & operator >> (istream & in, const String & other)
{
	in >> other.data;
	return in;
}
