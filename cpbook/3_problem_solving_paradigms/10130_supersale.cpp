// UVa 10130 - SuperSale
// https://onlinejudge.org/external/101/10130.pdf

#include <iostream>
#include <vector>
#include <utility>  // std::pair
#include <algorithm>  // std::max

using namespace std;

int knapsack(vector<pair<int, int>> items, int max_w)
{
	int m = items.size();
	int n = max_w;
	int dp[m + 1][n + 1];

	for (int i = 0; i <= m; i++)	{
		dp[i][0] = 0;
	}
	for (int j = 0; j <= n; j++)	{
		dp[0][j] = 0;
	}
	for (int i = 1; i <= m; i++)	{
		int item_value = items[i - 1].first;
		int item_weight = items[i - 1].second;
		for (int j = 1; j <= n; j++)	{
			if (j - item_weight < 0)	{
				dp[i][j] = dp[i - 1][j];
			}	else	{
				dp[i][j] = max(dp[i - 1][j], item_value + dp[i - 1][j - item_weight]);
			}
		}
	}
	return dp[m][n];
}


int main()
{
/*
	vector<pair<int, int>> items;
	items.push_back(make_pair(2000, 3));
	items.push_back(make_pair(3000, 4));
	items.push_back(make_pair(1500, 1));
	cout << knapsack(items, 4) << endl;
*/
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--)	{
		int n;
		cin >> n;
		vector<pair<int, int>> objects;
		for (int i = 0; i < n; i++)	{
			int p, w;
			cin >> p >> w;
			objects.push_back(make_pair(p, w));
		}
		int total_value = 0;
		int people;
		cin >> people;
		for (int i = 0; i < people; i++)	{
			int max_weight;
			cin >> max_weight;
			total_value += knapsack(objects, max_weight);
		}
		cout << total_value << "\n";
	}
	return 0;
}
