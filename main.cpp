#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
	Vector<int> v1{ 8, 3, 4, 5, 6 };
	v1.push_back(4);
	v1.push_back(6);
	v1.push_back(7);
	cout << "ÏÂ±ê:";
	for (Size_t i = 0; i < v1.size(); ++i) {
		cout << v1[i] << " ";
	}
	cout << endl;

	cout << "µü´úÆ÷:";
	for (Vector<int>::iterator it = v1.begin();
		it != v1.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "·¶Î§:";
	for (auto i : v1) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}

