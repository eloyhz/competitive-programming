// UVa 10074 - Take the Land
// https://onlinejudge.org/external/100/10074.pdf

#include <iostream>
#include <vector>

using namespace std;

int max_zero_area(int m, int n, vector<vector<int>>& field)
{
	int i, j, k, l;
	int rsum[m][n];
	int max_zero, width, height, area;

	for (i = 0; i < m; i++)	{
		for (j = 0; j < n; j++)	{
			rsum[i][j] = field[i][j];
			if (i > 0)	{
				rsum[i][j] += rsum[i - 1][j];
			}
			if (j > 0)	{
				rsum[i][j] += rsum[i][j - 1];
			}
			if (i > 0 && j > 0)	{
				rsum[i][j] -= rsum[i - 1][j - 1];
			}
		}
	}
	max_zero = 0;
	for (i = 0; i < m; i++)	{
		for (j = 0; j < n; j++)	{
			for (k = i; k < m; k++)	{
				for (l = j; l < n; l++)	{
					area = rsum[k][l];
					if (i > 0)	{
						area -= rsum[i - 1][l];
					}
					if (j > 0)	{
						area -= rsum[k][j - 1];
					}
					if (i > 0 && j > 0)	{
						area += rsum[i - 1][j - 1];
					}
					if (area == 0)	{
						width = l - j + 1;
						height = k - i + 1;
						max_zero = max(max_zero, width * height);
					}
				}
			}
		}
	}
	return max_zero;
}

int main()
{
	vector<vector<int>> field;
	int m, n;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true)	{
		cin >> m >> n;
		if (m == 0 and n == 0)	{
			break;
		}
		field.clear();
		for (int i = 0; i < m; i++)	{
			vector<int> row;
			for (int j = 0; j < n; j++)	{
				int f;
				cin >> f;
				row.push_back(f);
			}
			field.push_back(row);
		}
		cout << max_zero_area(m, n, field) << "\n";
	}
	return 0;
}
			

