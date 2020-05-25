// UVa 10102 - The path in the colored field
// https://onlinejudge.org/external/101/10102.pdf

#include <iostream>
#include <climits>		// INT_MAX
#include <string>
#include <vector>
#include <utility>		// std::pair
#include <algorithm> 	// std::max, std::min

using namespace std;

void test_case(int m)
{
	int distance, result;
	string row;
	int color;
	vector<pair<int, int>> ones, threes;

	for (int i = 0; i < m; i++)	{
		cin >> row;
		for (int j = 0; j < m; j++)	{
			color = row[j] - '0';
			if (color == 1)	{
				ones.push_back(make_pair(i, j));
			}	else if (color == 3)	{
				threes.push_back(make_pair(i, j));
			}
		}
	}
	result = 0;
	for (auto one: ones)	{
		distance = INT_MAX;
		for (auto three: threes)	{
			distance = min(distance, abs(one.first - three.first) + 
									 abs(one.second - three.second));
		}
		result = max(result, distance);
	}
	cout << result << "\n";
}

int main()
{
	int m;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (cin >> m)	{
		test_case(m);
	}
	return 0;
}
