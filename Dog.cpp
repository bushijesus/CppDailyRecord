#include "stdafx.h"
#include "Dog.h"
#include <cstring>
#include <iostream>
using namespace std;

Dog::Dog()
{
	m_no = 0;
	m_name[0] = 0;
	m_age = 0;
}

Dog::Dog(int no, char name[], int age)
{
	m_no = no;
	int len = strlen(name) + 1;
	for (int i = 0 ; i < len; ++i)
	{
		m_name[i] = name[i];
	}
	m_name[len] = 0;
	m_age = age;
}

void Dog::setDog(int no, char name[], int age)
{
	m_no = no;
	int len = strlen(name) + 1;
	for (int i = 0; i < len; ++i)
	{
		m_name[i] = name[i];
	}
	m_age = age;
}

void Dog::getDog() const
{
	cout << "±àºÅ:" << m_no << "\tÐÕÃû£º" << m_name << "\tÄêÁä£º" << m_age << endl;
}

void Dog::getDogInfo(const Dog & dog)
{
	cout << "±àºÅ:" << dog.m_no << "\tÐÕÃû£º" << dog.m_name << "\tÄêÁä£º" << dog.m_age << endl;
}

Dog::~Dog()
{
}
