#include <string>
#include <iostream>
using namespace std;

void test1() {
// 	string s1;
// 	cout << "�����룺" << endl;
// 	cin >> s1;
// 	cout << "s1��" << s1 << endl;

	string s2 = "123456789";
	s2 += "asdfghjkl";
	cout << "s2��" << s2 << endl;

	for (int i = 0; i < static_cast<int>(s2.size()); ++i)
	{
		cout << s2[i] << ' ';
	}
	for (size_t i = 0; i < s2.size(); ++i)
	{
		cout << s2[i] << ' ';
	}
	cout << endl;
	for (auto i : s2)
	{
		cout << i << ' ';
	}
	cout << endl;
}

void test2() {
	string s;
	int numOfLower = 0;
	cout << "������һ���ַ�����" << endl;
	getline(cin, s);
//	cin >> s;

// 	for (auto i : s)
// 	{
// 		if (islower(i))
// 		{
// 			numOfLower++;
// 		}
// 	}
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (islower(s[i]))
		{
			numOfLower++;
		}
	}
	cout << "Сд��ĸ�ĸ�����" << numOfLower << endl;

}

void test3() {
	string s;
	cout << "������һ���ַ�����" << endl;
	//cin >> s;
	getline(cin, s);
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (isupper(s[i]))
		{
			s[i] = tolower(s[i]);
		}
	}
	cout << s << endl;
}

void test4() {
	string s;
	cout << "������һ���ַ�����" << endl;
	getline(cin, s);
	int left = 0;
	int right = s.size() - 1;
	while (left <= right)
	{
		swap(s[left], s[right]);
		left++;
		right--;
	}
	cout << s << endl;
}

void test5() {
	string s = "afvavawc";
	int res = strcmp(s.c_str(), "adacac");
	bool cmp;
	if (res != 0)
	{
		cmp = false;
	}
	else
	{
		cmp = true;
	}
	cout << "equal ? " << boolalpha << cmp;
}

void test6() {
	string s = "afvavawc";
	cout << s.substr(2, 2) << endl;
	cout << s.substr(2, 10) << endl;
	cout << s.substr(2) << endl;
}

void test7() {
	string s = "afvavawc";
	size_t pos = s.find("a", 6);
	if (pos != string::npos)
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}
}

void test8() {
	string s = "���Σ��У�78��";
	cout << "������"<<s.substr(0, 4) << endl;
	cout << "�Ա�"<<s.substr(6, 2) << endl;
	cout << "���䣺"<<s.substr(10,2) << endl;
}
void test9() {
	string s = "����;��;78��";
	cout << "������" << s.substr(0, 4) << endl;
	cout << "�Ա�" << s.substr(5, 2) << endl;
	cout << "���䣺" << s.substr(8, 2) << endl;
}
int main() {
	test9();
	return 0;
}