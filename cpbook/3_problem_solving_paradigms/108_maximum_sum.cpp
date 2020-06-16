// UVa 108 - Maximum Sum
// https://onlinejudge.org/external/1/108.pdf
// Reference: Competitive Programming 3, Halim & Halim, p. 104
// This problem is solved using an algorithm O(n^4)
// The C++ version is faster than Python version

#include <iostream>
#include <vector>

using namespace std;

int maximum_sum(int n)
{
	int a[n][n];
	int num, sub_rect, max_sub_rect;

	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < n; j++)	{
			cin >> num;
			a[i][j] = num;
			if (i > 0)	{
				a[i][j] += a[i - 1][j];
			}
			if (j > 0)	{
				a[i][j] += a[i][j - 1];
			}
			if (i > 0 && j > 0)	{
				a[i][j] -= a[i - 1][j - 1];
			}
		}
	}
	max_sub_rect = -127 * 100 * 100;
	for (int i = 0; i < n; i++)	{		// (i, j) start coordinate
		for (int j = 0; j < n; j++)	{
			for (int k = i; k < n; k++)	{	// (k, l) end coordinate
				for (int l = j; l < n; l++)	{
					sub_rect = a[k][l];		// sum of all items from (0,0) to (k, l)
					if (i > 0)	{
						sub_rect -= a[i - 1][l];
					}
					if (j > 0)	{
						sub_rect -= a[k][j - 1];
					}
					if (i > 0 && j > 0)	{
						sub_rect += a[i - 1][j - 1];
					}
					max_sub_rect = max(max_sub_rect, sub_rect);
				}
			}
		}
	}
	return max_sub_rect;
}

int main()
{
	int n, max_sum;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (cin >> n)	{
		max_sum = maximum_sum(n);
		cout << max_sum << "\n";
	}
	return 0;
}

