// 0725.cpp : �������̨Ӧ�ó������ڵ㡣
//

//#include "stdafx.h"
// #include <iostream>
// using namespace std;
// 
// class A {
// 	friend void output(A& a);
// private:
// 	static int a;
// public:
// 	
// };
// int A::a = 10;     // ��̬��Ա������ʼ��
// void output(A& aa) {
// 	cout << aa.a << endl;
// }
// void test1() {
// 	A a1;
// 	output(a1);
// }
// 
// int add(int a, int b) {
// 	return a + b;
// }
// double add(double a, double b) {
// 	return a + b;
// }
// void test2() {
// 	cout << add((double)1, 3.3) << endl;
// }
// 
// class B {
// private:
// 	int a;
// public:
// 	B() {
// 		a = 0;
// 	}
// 	B(int n) {
// 		a = n;
// 	}
// 	void my_print() {
// 		cout << a << endl;
// 		cout << "my_print()" << endl;
// 	}
// 	void my_print() const{
// 		cout << a << endl;
// 		cout << "my_print() const" << endl;
// 	}
// };
// void test3() {
// 	B b1;
// 	const B b2;
// 	B b3(3);
// 	const B b4(3);
// 
// 	b1.my_print();
// 	b2.my_print();
// 	b3.my_print();
// 	b4.my_print();
// 
// }
// int main()
// {
// 	test3();
// 	return 0;
// }

