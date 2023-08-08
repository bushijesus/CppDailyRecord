#include "stdafx.h"
#include <iostream>
using namespace std;
#define CALL(n) test##n()
void test1() {
	cout << "test1()" << endl;
}
void test2() {
	cout << "test2()" << endl;
}
//int main() {
//	for (int i = 0; i <= 9; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			cout << j << "*" << i << "=" << j*i << " ";
//		}
//		cout << endl;
//	}
//#ifdef _WIN32
//	cout << "当前为Windows系统" << endl;
//#elif __linux__
//	cout << "当前为Linux系统" << endl;
//#else
//	cout << "Unknown" << endl;
//#endif // WIN32
//#ifdef _DEBUG
//	cout << "Debug" << endl;
//#else 
//	cout << "Release" << endl;
//#endif
//
//#ifdef MAYI
//	cout << "MAYI" << endl;
//#endif
//
//
//#define STR(x) #x
//	cout << STR(hello world) << endl;
//
//	CALL(1);
//	CALL(2);
//	cout << __DATE__ << endl;
//	cout << __FILE__ << endl;
//	cout << __LINE__ << endl;
//	cout << __TIME__ << endl;
//	cout << __FUNCTION__ << endl;
//
//
//	return 0;
//}