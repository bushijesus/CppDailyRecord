#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class Solution59 {
public:
	vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> result(n, vector<int>(n, 0));
		int startx = 0;
		int starty = 0;
		int count = 1;
		int loop = n / 2;
		int mid = n / 2;
		int offset = 1;
		int i, j;
		while (loop--)
		{
			i = startx;
			j = starty;
			// 上行从左到右
			for (; j < n - offset; ++j)
			{ 
				result[startx][j] = count++;
			}
			// 右列从上到下
			for (; i < n - offset; ++i)
			{
				result[i][j] = count++;
			}
			// 下行从右到左
			for (; j > starty; --j)
			{
				result[i][j] = count++;
			}
			// 左列从下到上
			for (; i > startx; --i)
			{
				result[i][j] = count++;
			}
			startx++;
			starty++;
			offset++;
		}
		if (n % 2 == 1)
		{
			result[mid][mid] = count;
		}
		return result;
	}
};