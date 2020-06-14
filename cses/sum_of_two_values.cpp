#include <iostream>
#include <vector>
#include <utility>  // pair
#include <algorithm>

using namespace std;

int main()
{
	int n, x, num, y, hi, lo, mid;
	vector<pair<int, int>> v;

	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> x;
	for (int i = 0; i < n; i++)	{
		cin >> num;
		v.push_back(make_pair(num, i + 1));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)	{
		y = x - v[i].first;
		lo = 0;
		hi = n - 1;
		while (lo <= hi)	{
			mid = lo + (hi - lo) / 2;
			if (v[mid].first == y && mid != i)	{
				cout << v[i].second << " " << v[mid].second << "\n";
				return 0;
			}	
			else if (y < v[mid].first)	{
				hi = mid - 1;
			}	
			else	{
				lo = mid + 1;
			}
		}
	}
	cout << "IMPOSSIBLE\n";
	return 0;
}
		

