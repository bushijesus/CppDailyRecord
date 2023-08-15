#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void test01() {
	vector<int> v1;
	v1.push_back(5);
	v1.push_back(20);
	v1.push_back(8);
	cout << v1.size() << endl;
	cout << v1.empty() << endl;

	for (int i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << ' ';
	}
	cout << endl;

	for (auto T : v1)
	{
		cout << T << ' ';
	}
	cout << endl;

	for (vector<int>::iterator iter = v1.begin(); iter != v1.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;
}


void test02() {
	vector<int> v2 = { 1,0,1,1,1 };
	v2.erase(v2.begin());

	for (vector<int>::iterator iter = v2.begin(); iter != v2.end();)
	{
		if (*iter == 1)
		{
			iter = v2.erase(iter);
		}
		else
		{
			++iter;
		}
	}
	cout << endl;
}

void test03() {
	vector<int> v3 = { 5,4,8,6,2,3,1,8,9 };
	sort(v3.begin(), v3.end(), greater<int>());
	for (vector<int>::iterator iter = v3.begin(); iter != v3.end(); ++iter)
	{
		cout << *iter << ' ';
	}
	cout << endl;
}

class Student {
public:
	Student() : name(""), age(0) {}
	Student(string name, int age) {
		this->name = name;
		this->age = age;
	}
	friend ostream& operator<<(ostream& out, const Student& other) {
		out << other.name << ' ' << other.age << endl;
		return out;
	}
	bool operator<(const Student& other) {
		return this->age < other.age;
	}
	bool operator>(const Student& other) {
		return this->age > other.age;
	}
private:
	string name;
	int age;
};

void test04() {
	vector<Student> v4;
	v4.push_back(Student("张鑫", 56));
	v4.push_back(Student("张森", 98));
	v4.push_back(Student("张淼", 49));
	v4.push_back(Student("张焱", 18));
	v4.push_back(Student("张垚", 73));
	sort(v4.begin(), v4.end());
	for (auto T : v4)
	{
		cout << T;
	}
}

void split(const string& str, const string& sp, vector<string>& arr) {
	size_t left = 0;
	size_t pos = 0;
	while ((pos = str.find(sp, left)) != std::string::npos) {
		arr.push_back(str.substr(left, pos - left));
		left = pos + sp.length();
	}

	arr.push_back(str.substr(left));
}

void test05() {
	vector<string> vs;
	string s1 = "aaasssdddfffdddsssaaa";
	string s2 = "sss";
	split(s1, s2, vs);
	for (int i = 0; i < vs.size(); ++i)
	{
		cout << vs[i] << ' ';
	}
	cout << endl;
}


//int main() {
//	test05();
//	return 0;
//}