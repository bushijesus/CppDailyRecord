#include "stdafx.h"
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	m_year = 0;
	m_month = 0;
	m_day = 0;
}

Date::Date(int year, int month, int day)
{
	m_year = year;
	m_month = month;
	m_day = day;
}


Date::~Date()
{
}

Date & Date::operator++()
{
	// �ж�����
	bool isLeapYear = (m_year % 4 == 0 && m_year % 100 != 0) || (m_year % 400 == 0);
	int daysInMonth[] = { 31, 28 + isLeapYear, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	m_day++;
	// �ж��Ƿ���Ҫ��λ
	if (m_day > daysInMonth[m_month - 1]) {
		m_day = 1;
		m_month++;
		if (m_month > 12) {
			m_month = 1;
			m_year++;
		}
	}
	return *this;
}

Date Date::operator++(int)
{
	Date tmp = *this;
	// �ж�����
	bool isLeapYear = (m_year % 4 == 0 && m_year % 100 != 0) || (m_year % 400 == 0);
	int daysInMonth[] = { 31, 28 + isLeapYear, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	m_day++;
	// �ж��Ƿ���Ҫ��λ
	if (m_day > daysInMonth[m_month - 1]) {
		m_day = 1;
		m_month++;
		if (m_month > 12) {
			m_month = 1;
			m_year++;
		}
	}
	return tmp;
}

void Date::output() const
{
	cout << m_year << "��" << m_month << "��" << m_day << "��" << endl;
}
