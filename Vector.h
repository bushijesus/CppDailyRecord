#pragma once
#include "stdafx.h"
template<class T>
class Vector
{
public:
	Vector();
	~Vector();
	int size() const;
	void push_back(T v);
	T& at(int index);
	T& front();
	T& back();
	bool empty() const;
	bool equal(const Vector<T>& other) const;
	void output() const;
	void erase(int index);
	T& operator[](int sub);
	T& operator[](int sub) const;
private:
	T* m_p;
	int m_size;
};

template<class T>
Vector<T>::Vector()
{
	m_p = nullptr;
	m_size = 0;
}

template<class T>
Vector<T>::~Vector()
{
	if (m_p)
	{
		delete[]m_p;
		m_p = nullptr;
	}
	m_size = 0;
}

template<class T>
int Vector<T>::size() const
{
	return m_size;
}

template<class T>
void Vector<T>::push_back(T v)
{
	T* tmp = new T[m_size + 1];
	memcpy_s(tmp, m_size * sizeof(T), m_p, m_size * sizeof(T));
	tmp[m_size++] = v;
	delete[]m_p;
	m_p = tmp;
}

template<class T>
T & Vector<T>::at(int index)
{
	if (index < 0 || index >= m_size) {
		throw "invalid index";
	}
	return m_p[index];
}

template<class T>
T & Vector<T>::front()
{
	if (m_p)
	{
		return m_p[0];
	}
	else
	{
		cout << "uninitialized object" << endl;
		abort();
	}
}

template<class T>
T & Vector<T>::back()
{
	if (m_p)
	{
		return m_p[m_size - 1];
	}
	else
	{
		cout << "uninitialized object" << endl;
		abort();
	}
}

template<class T>
bool Vector<T>::empty() const
{
	return m_size == 0;
}

template<class T>
bool Vector<T>::equal(const Vector<T>& other) const
{
	if (other.m_size != m_size)
	{
		return false;
	}
	for (int i = 0; i < m_size; ++i)
	{
		if (m_p[i] != other.m_p[i])
		{
			return false;
		}
	}
	return true;
}

template<class T>
void Vector<T>::output() const
{
	if (m_p)
	{
		for (int i = 0; i < m_size; ++i)
		{
			cout << m_p[i] << ' ';
		}
	}
	cout << endl;
}

template<class T>
void Vector<T>::erase(int index)
{
	if (!m_p)
	{
		cout << "uninitialized object" << endl;
		abort();
	}
	if (index < 0 || index >= m_size) {
		cout << "invalid index" << endl;
		abort();
	}
	for (int i = index; i < m_size; ++i)
	{
		m_p[i] = m_p[i + 1];
	}
	m_size--;
}

template<class T>
T & Vector<T>::operator[](int sub)
{
	if (!m_p)
	{
		cout << "uninitialized object" << endl;
		abort();
	}
	if (sub < 0 || sub >= m_size)
	{
		cout << "invalid sub" << endl;
		abort();
	}
	return m_p[sub];
}

template<class T>
T & Vector<T>::operator[](int sub) const
{
	if (!m_p)
	{
		cout << "uninitialized object" << endl;
		abort();
	}
	if (sub < 0 || sub >= m_size)
	{
		cout << "invalid sub" << endl;
		abort();
	}
	return m_p[sub];
}
