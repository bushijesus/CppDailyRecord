// 0728.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <cstring>
#include <iostream>
using namespace std;
// ����
class Person {
public:
	Person() {
		memset(name, 0, sizeof(name));
		memset(sex, 0, sizeof(sex));
		age = 0;
	}
	void set_name(const char* name) {
		strcpy_s(this->name, strlen(name) + 1, name);
	}
protected:
	char name[64];
	char sex[5];
	int age;
};

//����
class Student :public Person {
public:
	Student(int id, const char* name, const char* sex, int age) {
		this->id = id;
		strcpy_s(this->name, strlen(name) + 1, name);
		strcpy_s(this->sex, strlen(sex) + 1, sex);
		this->age = age;
	}
	void output() {
		cout << "id��" << id << "\tname:" << name << "\tsex:" << sex << "\tage:" << age << endl;
	}
protected:
	int id;
};
int main()
{
	Student s1(12138, "ɵ��", "�е�", 48);
	s1.output();
    return 0;
}

