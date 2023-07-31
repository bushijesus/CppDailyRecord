// 0731.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Student.h"
#include "App.h"
#include "MemData.h"
#include "TxtData.h"
#include <iostream>
using namespace std;

class A {
public:
	virtual void output() {
		cout << "A::output()" << endl;
	}
};
class B :public A {
public:
	virtual void output() {
		cout << "B::output()" << endl;
	}
};

void test01() {
	B b;
	b.output();
	A* p = &b;
	p->output();
	A& a = b;
	a.output();
}

void test02() {
	Student s1("张鑫", 'F', 40);
	Student s2;
	s2.setName("大黄");
	s2.setSex('M');
	s2.setAge(8);
	cout << s1;
	cout << s2;
	cout << s1.getAge() << endl;
}

void test03() {
	LoadData* p = new MemData;
	App app;
	app.run(p);
}
void test04() {
	LoadData* p = new TxtData;
	App app;
	app.run(p);
}
int main()
{
	test04();
    return 0;
}

