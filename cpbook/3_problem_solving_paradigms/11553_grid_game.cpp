// UVa 11553 - Grid Game
// https://onlinejudge.org/external/115/11553.pdf

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void load_data(vector<vector<int>>& grid, int n)
{
	vector<int> row;
	int x;

	for (int i = 0; i < n; i++)	{
		row.clear();
		for (int j = 0; j < n; j++)	{
			cin >> x;
			row.push_back(x);
		}
		grid.push_back(row);
	}
}

int game(vector<vector<int>>& grid, int n, vector<int>& col)
{
	int w = 0;

	for (int i = 0; i < n; i++)	{
		w += grid[i][col[i]];	
	}

	return w;
}

void test_case(int n)
{
	vector<vector<int>> grid;
	vector<int> perm;
	int best = INT_MAX;
	int result;

	load_data(grid, n);
	for (int i = 0; i < n; i++)	{
		perm.push_back(i);
	}
	do	{
		result = game(grid, n, perm);
		best = min(best, result);
	}	while (next_permutation(perm.begin(), perm.end()));
	cout << best << endl;
}


int main()
{
	int tc, n;

	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> tc;
	while (tc--)	{
		cin >> n;
		test_case(n);
	}
	return 0;
}
