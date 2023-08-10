#include "stdafx.h"
#include "String.h"
#include <iostream>
using namespace std;

int main() {
	String s1("qwertyuiop");
	cout << s1;
	String s2;
	s2 += s1;
	cout << s2;
// 	String s3 = s1 + s2;
// 	cout << s3;
	char* str1 = s1.c_str();
	cout << str1 << endl;
	cout << s1.front() << endl;
	cout << s1.back() << endl;
	cout << s1.at(3) << endl;
	cout << "s1 empty ? " << boolalpha << s1.empty() << endl;
	cout << "s1中元素个数：" << s1.size() << endl;
	s1.erase(2);
 	cout << s1 << endl;
 	s1.pop_back();
 	cout << s1 << endl;
//  	String s4 = s1.substr(2, 3);
//  	cout << s4;
	s1.clear();
	cout << "s1 empty ? " << boolalpha << s1.empty() << endl;

}