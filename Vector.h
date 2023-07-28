#pragma once
#include <iostream>
using namespace std;

class Vector
{
public:
	Vector();
	Vector(const Vector& other);
	~Vector();
	int size() const;
	void push_back(int val);
	bool empty() const;
	int front() const;
	int back() const;
	Vector operator+(const Vector& other) const;
	Vector& operator+=(const Vector& other);
	bool operator==(const Vector& other) const;
	int& operator[](int index);
	Vector &operator=(const Vector &other);
	const int& operator[](int index) const;
	void output() const;
	friend ostream& operator<<(ostream& out, const Vector& other);
	friend istream& operator>>(istream& in,Vector& arr);
private:
	int * m_p;
	int m_size;
};

