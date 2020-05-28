// UVa 11553 - Grid Game
// https://onlinejudge.org/external/115/11553.pdf

#include <iostream>
#include <vector>
#include <algorithm>

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

int game(vector<vector<int>> grid, int n, vector<int> order)
{
	int alice_candies = 0;

	for (auto i : order)	{
		int bob_column = 0;
		for (int j = 1; j < n; j++)	{
			if (grid[i][j] < grid[i][bob_column])	{
				bob_column = j;
			}
		}
		alice_candies += grid[i][bob_column];
		for (int k = 0; k < n; k++)	{
			grid[k][bob_column] = 1001;
		}
	}
	return alice_candies;
}

void test_case(int n)
{
	vector<vector<int>> grid;

	load_data(grid, n);
	
	vector<int> perm;
	for (int i = 0; i < n; i++)	{
		perm.push_back(i);
	}
	int best_neg = 0;
	int best_pos = 0;
	int result = 0;
	do	{
		result = game(grid, n, perm);
		if (result < 0)	{
			best_neg = min(best_neg, result);
		}	else	{
			best_pos = max(best_pos, result);
		}
	}	while (next_permutation(perm.begin(), perm.end()));
	cout << (best_neg < 0 ? best_neg : best_pos) << "\n";
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
