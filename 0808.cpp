// 0808.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define V 2
void test01() {
#if V == 1
	cout << "1" << endl;
#elif V == 2
	cout << "2" << endl;
#else
	cout << "3" << endl;
#endif
}

void test02() {
#ifdef _DEBUG
	cout << "Debug" << endl;
#else 
	cout << "Release" << endl;
#endif

#ifdef MAYI
	cout << "MAYI" << endl;
#endif
}

 //int main()
 //{
 //	//test01();
 //	test02();
 //    return 0;
 //}

