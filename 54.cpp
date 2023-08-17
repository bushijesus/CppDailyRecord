#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class Solution54 {
public:
	public:
		vector<int> spiralOrder(vector<vector<int>>& matrix) {
			int rows = matrix.size();
			int columns = matrix[0].size();
			int startx = 0;
			int starty = 0;
			int count = 1;
			int loop = min(rows, columns) / 2;
			int midRow = rows / 2;
			int midCol = columns / 2;
			int offset = 1;
			int i, j;
			vector<int> result;

			while (loop--) {
				i = startx;
				j = starty;

				// ���д�����
				for (; j < columns - offset; ++j) {
					result.push_back(matrix[i][j]);
				}

				// ���д��ϵ���
				for (; i < rows - offset; ++i) {
					result.push_back(matrix[i][j]);
				}

				// ���д��ҵ���
				for (; j > starty; --j) {
					result.push_back(matrix[i][j]);
				}

				// ���д��µ���
				for (; i > startx; --i) {
					result.push_back(matrix[i][j]);
				}

				startx++;
				starty++;
				offset++;
			}

			if (min(rows, columns) % 2 == 1) {
				if (rows < columns) {
					for (j = starty; j <= columns - starty - 1; ++j) {
						result.push_back(matrix[midRow][j]);
					}
				}
				else {
					for (i = startx; i <= rows - startx - 1; ++i) {
						result.push_back(matrix[i][midCol]);
					}
				}
			}

			return result;
		}
};
