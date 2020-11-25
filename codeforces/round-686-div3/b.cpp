//
// Codeforces Round #686 (Div. 3) [VIRTUAL]
//
// B. Unique Bid Auction [AC]
// https://codeforces.com/contest/1454/problem/B
//
// Author: eloyhz
// Date: Nov/25/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
		int n;
		cin >> n;
		map<int, int> mp;
		int a[n];
		for (int i = 0; i < n; i++)	{
			int x;
			cin >> x;
			a[i] = x;
			mp[x]++;
		}
		bool found = false;
		int unique = 0;
		for (auto it = mp.begin(); it != mp.end(); it++)	{
			if (it->second == 1)	{
				unique = it->first;
				found = true;
				break;
			}
		}
		if (found)	{
			for (int i = 0; i < n; i++)	{
				if (a[i] == unique)	{
					cout << i + 1 << endl;
					break;
				}
			}
		}
		else	{
			cout << -1 << endl;
		}

    }

    return 0;
}

