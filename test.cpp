#include "stdafx.h"
#include "Date.h"
#include "Vector.h"
#include <iostream>
using namespace std;

void testDate() {
	Date d1(2023, 12, 31);
	d1.output();
	d1++;
	d1.output();

}
void testVector() {
	Vector v1;
	v1.push_back(1);
	v1.push_back(4);
	v1.push_back(7);
	v1.push_back(2);
	v1.push_back(5);
	cout << v1;
	cout << boolalpha << v1.empty();
	cout << v1.size() << endl;
	Vector v2;
	v1.push_back(89);
	v1.push_back(87);
	v1.push_back(98);
	v1.push_back(68);

// 	Vector v3 = v1 + v2;
// 	v3.output();
}
int main() {
	testVector();
	return 0;
}