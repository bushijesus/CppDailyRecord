#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <xutility>
using namespace std;

void test01() {
	string s;
	getline(cin, s);
	cout << s << endl;
}

void test02() {
	string s;
	cout << "请输入：" << endl;

	while (getline(cin, s))
	{
		if (s == "quit") {
			return;
		}
		cout << s << endl;
		cout << "-----------" << endl;
	}
}

void test03() {
	ofstream f1("test.txt");
	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			f1 << j << "*" << i << "=" << j * i << "\t";
		}
		f1 << endl;
	}
}

void createFile() {
	string s;
	int n = 0;
	cout << "请输入文件路径和文件个数：" << endl;
	getline(cin, s);
	cin >> n;
	string fullPath = s + "\\";
	for (int i = 1; i <= n; ++i) {
		string tmp = fullPath + to_string(i) + ".txt";
		ofstream f1(tmp);
		f1 << i << endl;
	}
}

void test04() {
	vector<int> v;
	cout << "请输入N个数字：" << endl;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int input = 0;
		cin >> input;
		v.push_back(input);
	}
	char sortRule;
	cout << "请输入排序规则" << endl;
	cin >> sortRule;
	while (true)
	{
		if (sortRule == '<')
		{
			sort(v.begin(), v.end());
			break;
		}
		else if (sortRule == '>')
		{
			sort(v.begin(), v.end(), greater<int>());
			break;
		}
		else
		{
			cout << "无效输入请重试" << endl;
		}
	}
	ofstream f1("1.txt");
	for (int i = 0; i < v.size(); ++i)
	{
		f1 << v[i] << ' ';
	}
	f1 << endl;
}


class Person {
public:
	string name;
	int age;
};


void split(const string& line, const string& sp, vector<string>& arr) {
	size_t left = 0;
	size_t pos = 0;
	while (((pos = line.find(sp, left)) != string::npos))
	{
		arr.push_back(line.substr(left, pos - left));
		left = pos + sp.length();
	}
	arr.push_back(line.substr(left));
}

void test05() {
	ifstream f("test05.txt");
// 	string name;
// 	int age;
	string line;
// 	while (f >> name >> age)
// 	cout << name << "\t" << age << endl;

	while (getline(f, line))
	{
		vector<string> arr;
		split(line, ",", arr);
		string name = arr[0];
		int age = stoi(arr[1]);
		cout << name << "\t" << age << endl;
	}
}

class read {
public:
	read() {
		ifstream f("test06.txt");
		string line;
		int numOfLine = 1;
		while (getline(f, line))
		{
			vector<string> arr;
			split(line, ",", arr);
			cout << numOfLine++ << ":";
			int flag = 1;
			for (int i = 0; i < arr.size(); ++i)
			{
				cout << flag++ << "=" << arr[i] << ",";
			}
			cout << endl;
		}
	}
};

void test06() {
	read re;
}


class SplitFile {
public:
	void split(int num) {
		int numOFfLine = 0;
		ifstream inputfile(filename);
		string tmp;
		while (getline(inputfile, tmp, '\n'))
		{
			numOFfLine++;
		}
		int i = 1;
		while (numOFfLine)
		{
			tmp = to_string(i) + ".txt";
			ofstream f(tmp);
		}
	}
private:
	string filename;
};
class MergeFile {

};
int main() {
	//createFile();
	test06();
	return 0;
}