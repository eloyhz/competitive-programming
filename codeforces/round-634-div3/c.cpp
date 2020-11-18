//
// Codeforces Round #634 (Div. 3) [VIRTUAL]
//
// C. Two Teams Composing [AC]
// https://codeforces.com/contest/1335/problem/C
//
// Author: eloyhz
// Date: Nov/18/2020
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
		map<int, int> mp;
		int max_r = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
			max_r = max(max_r, mp[a[i]]);
		}
		int x = n / 2;
		while (x > 0)	{
			if (x <= max_r && x <= mp.size() - (x == max_r ? 1 : 0))
				break;
			x--;
		}
		cout << x << endl;
    }

    return 0;
}

