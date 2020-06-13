// UVa 11100 - The Trip, 2007
// https://onlinejudge.org/external/111/11100.pdf

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int calculate_repeated(const vector<int>& bags)
{
	int result = 0;
	map<int, int> repeated;

	for (auto b : bags)	{
		repeated[b]++;
	}
	for (auto it = repeated.begin(); it != repeated.end(); it++)	{
		result = max(result, it->second);
	}
	return result;
}

void calculate_min(int n, vector<int>& bags, int& k, vector<vector<int>>& pieces)
{
	k = calculate_repeated(bags);
	pieces.clear();
	for (int i = 0; i < k; i++)	{
		vector<int> p;
		pieces.push_back(p);
	}
	sort(bags.begin(), bags.end());
	for (int i = 0; i < n; i += k)	{
		int j = 0;
		while (j < k && i + j < n)	{
			pieces[j].push_back(bags[i + j]);
			j++;
		}
	}
}

int main()
{
	bool first_case = true;
	int n, b, k;
	vector<int> bags;
	vector<vector<int>> pieces;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (cin >> n)	{
		if (n == 0)	{
			break;
		}
		if (first_case)	{
			first_case = false;
		}	else	{
			cout << "\n";
		}
		bags.clear();
		for (int i = 0; i < n; i++)	{
			cin >> b;
			bags.push_back(b);
		}
		calculate_min(n, bags, k, pieces);
		cout << k << "\n";
		for (auto piece : pieces)	{
			for (int i = 0; i < piece.size() - 1; i++)	{
				cout << piece[i] << " ";
			}
			cout << piece.back() << "\n";
		}
	}
	return 0;
}
