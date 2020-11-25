//
// Codeforces Round #686 (Div. 3) [VIRTUAL]
//
// C. Sequence Transformation [AC]
// https://codeforces.com/contest/1454/problem/C
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
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		map<int, int> mp;
		int prev = a[0];
		mp[a[0]]++;
		for (int i = 1; i < n; i++)	{
			if (a[i] != prev)	{
				mp[a[i]]++;
			}
			prev = a[i];
		}
		mp[a[0]]--;
		mp[a[n - 1]]--;
		int ans = INT_MAX;
		for (auto it = mp.begin(); it != mp.end(); it++)	{
			ans = min(ans, it->second);
		}	
		cout << ans + 1 << endl;
    }

    return 0;
}

