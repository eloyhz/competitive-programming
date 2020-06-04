// UVa 12192 - Grapevine
// https://onlinejudge.org/external/121/12192.pdf
// Reference #1: https://www.redgreencode.com/adapting-binary-search-uva-12192/
// Reference #2: https://saicheems.wordpress.com/2013/07/16/uva-12192-grapevine/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_best(vector<vector<int>>& field, int n, int m, int lower_value, int upper_value)
{
	int best = 0;
	
	for (int i = 0; i < n; i++)	{
		int j = lower_bound(field[i].begin(), field[i].end(), lower_value) - field[i].begin();
		for (int size = best; size < n; size++)	{
			int end_row = i + size;
			int end_col = j + size;
			if (end_row >= n || end_col >= m || field[end_row][end_col] > upper_value)	{
				break;
			}
			best = max(best, size + 1);
		}
	}
	return best;
}

void test_case(int n, int m)	{
	int h, q, u, l, best;
	vector<vector<int>> field;
	
	for (int i = 0; i < n; i++) {
		vector<int> row;
		for (int j = 0; j < m; j++)	{
			cin >> h;
			row.push_back(h);
		}
		field.push_back(row);
	}
	cin >> q;
	for (int i = 0; i < q; i++)	{
		cin >> l >> u;
		best = find_best(field, n, m, l, u);
		cout << best << "\n";
	}
	cout << "-\n";
}
		

int main()
{
	int n, m;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true)	{
		cin >> n >> m;
		if (n == 0 and m == 0)	{
			break;
		}
		test_case(n, m);
	}
	return 0;
}
