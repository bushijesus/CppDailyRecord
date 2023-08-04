#include "stdafx.h"
#include "Vector.h"
#include <iostream>
using namespace std;
int main() {
	Vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	cout << "元素个数：" << v.size() << endl;
	cout << "是否为空 ？ " << boolalpha << v.empty() << endl;
	cout << "第一个元素：" << v.front() << endl;;
	cout << "最后一个元素：" << v.back() << endl;
	Vector<int> v1;
	v1.push_back(5);
	cout << "v 和 v1是否相等 ？ " << boolalpha << v.equal(v1) << endl;
	v.output();
	v.erase(2);
	v.output();
	cout << "1处的元素为：" << v[1] << endl;
	cout << "------------------------------------------------------" << endl;
	Vector<char> vc;
	vc.push_back('a');
	vc.push_back('g');
	vc.push_back('t');
	vc.push_back('e');
	vc.push_back('i');
	cout << "元素个数：" << vc.size() << endl;
	cout << "是否为空 ？ " << boolalpha << vc.empty() << endl;
	cout << "第一个元素：" << vc.front() << endl;;
	cout << "最后一个元素：" << vc.back() << endl;
	Vector<char> vc1;
	vc1.push_back('p');
	cout << "v 和 v1是否相等 ？ " << boolalpha << vc.equal(vc1) << endl;
	vc.output();
	vc.erase(2);
	vc.output();
	cout << "1处的元素为：" << vc[1] << endl;
}