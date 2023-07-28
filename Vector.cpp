#include "stdafx.h"
#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector()
{
	m_p = nullptr;
	m_size = 0;
}

Vector::Vector(const Vector & other)
	: m_p(nullptr), m_size(other.m_size)
{
	if (m_size > 0) {
		m_p = new int[m_size];
		for (int i = 0; i < m_size; ++i) {
			m_p[i] = other.m_p[i];
		}
	}
}

Vector::~Vector()
{
	if (m_p) {
		delete[]m_p;
	}
}

int Vector::size() const
{
	if (m_p) {
		return m_size;
	}
	return 0;
}

void Vector::push_back(int val)
{
	int len = m_size + 1;
	int * tmp = new int[len];
	if (m_p) {
		memcpy_s(tmp, len * 4, m_p, len * 4);
		delete[]m_p;
	}
	tmp[m_size++] = val;
	m_p = tmp;
}

bool Vector::empty() const
{
	return m_size == 0;
}

int Vector::front() const
{
	if (m_p) {
		return m_p[0];
	}
	else {
		throw "empty vector";
	}
}

int Vector::back() const
{
	if (m_p) {
		return m_p[m_size - 1];
	}
	else {
		throw "empty vector";
	}
}

Vector Vector::operator+(const Vector & other) const
{
	Vector tmp = *this;
	if (other.m_p == nullptr) {
		return tmp;
	}
	int len = m_size + other.m_size + 1;
	int * tmp_arr = new int[len];
	memcpy_s(tmp_arr, len, m_p, len);
	for (int i = 0; i < other.m_size; ++i)
	{
		tmp_arr[m_size + i] = other.m_p[i];
	}
	delete m_p;
	tmp.m_p = tmp_arr;
	return tmp;
}

Vector & Vector::operator+=(const Vector & other)
{
	for (int i =0 ; i < other.m_size; ++i)
	{
		push_back(other.m_p[i]);
	}
	return *this;
}

bool Vector::operator==(const Vector & other) const
{
	if (m_p == nullptr && other.m_p == nullptr) {
		return true;
	}
	else if (m_p == nullptr || other.m_p == nullptr) {
		return false;
	}
	else {
		int max = m_size > other.m_size ? m_size : other.m_size;
		for (int i = 0; i < max; ++i)
		{
			if (m_p[i] != other.m_p[i])
			{
				return false;
			}
		}
	}
	return true;
}

int& Vector::operator[](int index)
{
	return m_p[index];
}

Vector & Vector::operator=(const Vector & other)
{
	// 如果原来有数据，先清空
	if (m_p) {
		delete[] m_p;
		m_p = nullptr;
		m_size = 0;
	}
	if (other.m_size > 0) {
		m_size = other.m_size;
		m_p = new int[m_size];
		for (int i = 0; i < m_size; ++i) {
			m_p[i] = other.m_p[i];
		}
	}
	return *this;
}

const int & Vector::operator[](int index) const
{
	if (index < 0 || index >= m_size)
	{
		throw "invalid index";
	}
	else {
		return m_p[index];
	}
}

void Vector::output() const
{
	if (m_p) {
		for (int i = 0; i < m_size; ++i)
		{
			cout << m_p[i] << ' ';
		}
		cout << endl;
	}
}

ostream & operator<<(ostream & out, const Vector & other)
{
	if (other.m_p) {
		for (int i = 0; i < other.m_size; ++i)
		{
			out << other.m_p[i] << ' ';
		}
		out << endl;
	}
	return out;
}

istream & operator >> (istream & in,Vector & arr)
{
	if (arr.m_p) {
		delete[] arr.m_p;
		arr.m_p = nullptr;
		arr.m_size = 0;
	}
	in >> arr.m_size;
	arr.m_p = new int[arr.m_size];
	for (int i = 0; i < arr.m_size; ++i) {
		in >> arr.m_p[i];
	}
	return in;
}
