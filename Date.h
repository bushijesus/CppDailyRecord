#pragma once
class Date
{
public:
	Date();
	Date(int year, int month, int day);
	~Date();
	Date& operator++();
	Date operator++(int);
	void output() const;
private:
	int m_year;
	int m_month;
	int m_day;
};

