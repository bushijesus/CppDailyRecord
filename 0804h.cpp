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
	cout << "Ԫ�ظ�����" << v.size() << endl;
	cout << "�Ƿ�Ϊ�� �� " << boolalpha << v.empty() << endl;
	cout << "��һ��Ԫ�أ�" << v.front() << endl;;
	cout << "���һ��Ԫ�أ�" << v.back() << endl;
	Vector<int> v1;
	v1.push_back(5);
	cout << "v �� v1�Ƿ���� �� " << boolalpha << v.equal(v1) << endl;
	v.output();
	v.erase(2);
	v.output();
	cout << "1����Ԫ��Ϊ��" << v[1] << endl;
	cout << "------------------------------------------------------" << endl;
	Vector<char> vc;
	vc.push_back('a');
	vc.push_back('g');
	vc.push_back('t');
	vc.push_back('e');
	vc.push_back('i');
	cout << "Ԫ�ظ�����" << vc.size() << endl;
	cout << "�Ƿ�Ϊ�� �� " << boolalpha << vc.empty() << endl;
	cout << "��һ��Ԫ�أ�" << vc.front() << endl;;
	cout << "���һ��Ԫ�أ�" << vc.back() << endl;
	Vector<char> vc1;
	vc1.push_back('p');
	cout << "v �� v1�Ƿ���� �� " << boolalpha << vc.equal(vc1) << endl;
	vc.output();
	vc.erase(2);
	vc.output();
	cout << "1����Ԫ��Ϊ��" << vc[1] << endl;
}