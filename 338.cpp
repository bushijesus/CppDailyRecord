#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class Solution338 {
public:
	vector<int> countBits(int n) {
// 		vector<int> v;
// 		v.push_back(0);
// 		for (int i = 1; i <= n; ++i) {
// 			int numOf1 = 0;
// 			while (i > 0) {
// 				if (i & 1 == 1) {
// 					numOf1++;
// 				}
// 				i >>= 1;
// 			}
// 			v.push_back(numOf1);
// 		}
// 		return v;

		vector<int> v(n + 1, 0); // ��ʼ���������Ϊ����Ϊ n+1 ��ȫ������
		for (int i = 1; i <= n; ++i) {
			// ����һ������ i��������Ʊ�ʾ�е� 1 �ĸ������� i/2 �Ķ����Ʊ�ʾ�� 1 �ĸ������� i%2 ��ֵ
			v[i] = v[i >> 1] + (i & 1);
		}
		return v;
	}
};