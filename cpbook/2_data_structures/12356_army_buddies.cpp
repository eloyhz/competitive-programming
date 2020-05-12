// UVa 12356 - Army buddies
// https://onlinejudge.org/external/123/12356.pdf

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int s, b, l, r, i, j;
	set<int> soldiers;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true)	{
		cin >> s >> b;
		if (s == 0 && b == 0)	{
			break;
		}
		soldiers.clear();
		for (i = 1; i <= s; i++)	{
			soldiers.insert(i);
		}
		for (i = 1; i <= b; i++)	{
			cin >> l >> r;
			for (j = l; j <= r; j++)	{
				soldiers.erase(j);
			}
			auto left = lower_bound(soldiers.begin(), soldiers.end(), l);
			auto right = upper_bound(soldiers.begin(), soldiers.end(), r);
			if (left == soldiers.begin())	{
				cout << "*";
			}	else	{
				cout << *--left;
			}
			cout << " ";
			if (right == soldiers.end())	{
				cout << "*";
			}	else	{
				cout << *right;
			}
			cout << "\n";
		}
		cout << "-\n";
	}
}
