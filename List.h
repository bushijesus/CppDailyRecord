#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;

template<class T>
class List {
public:
	List() : data(nullptr), pos(0) {}
	List(T* arr, int size) {
		data = new T[size];
		memcpy(data, arr, sizeof(T) * size);
		pos = size;
	}
	List(const List& other) :data(nullptr), pos(0) {
		pos = other.pos;
		data = new T[pos];
		memcpy(data, other.data, sizeof(T) + pos);
	}
	int size() const {
		return pos;
	}
	bool empty() const {
		return pos == 0;
	}
	void push_back(const T& val) {
		T* tmp = new T[pos + 1];
		memcpy(tmp, data, sizeof(T) * pos);
		tmp[pos++] = val;
		delete[] data;
		data = tmp;
	}
	void push_front(const T& val) {
		T* tmp = new T[pos + 1];
		tmp[0] = val;
		for (int i = 0; i < pos; ++i)
		{
			tmp[i + 1] = data[i];
		}
		pos++;
		delete[] data;
		data = tmp;
	}
	void remove(int index) {
		if (index < 0 || index >= pos)
		{
			cout << "invalid index" << endl;
			return;
		}
		for (int i = index; i < pos - 1; ++i)
		{
			data[i] = data[i + 1];
		}
		--pos;
	}
	friend ostream& operator<<(ostream& out, const List& other) {
		for (int i = 0; i < other.pos; ++i)
		{
			out << other.data[i] << ' ';
		}
		out << endl;
		return out;
	}
	bool operator==(const List& other) const {
		if (data == nullptr && other.data == nullptr) {
			return true;
		}
		else if (data == nullptr || other.data == nullptr) {
			return false;
		}
		if (pos != other.pos)
		{
			return false;
		}
		int max = pos > other.pos ? pos : other.pos;
		for (int i = 0; i < max; ++i)
		{
			if (data[i] != other.data[i])
			{
				return false;
			}
		}
		return true;
	}
	List& operator+=(const List& other) {
		for (int i = 0; i < other.pos; ++i)
		{
			push_back(other.data[i]);
		}
		return *this;
	}
private:
	T* data;
	int pos;
};