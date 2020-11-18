//
// Codeforces Round #634 (Div. 3) [VIRTUAL]
//
// B. Construct the String [AC]
// https://codeforces.com/contest/1335/problem/B
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
		int n, a, b;
		cin >> n >> a >> b;
		string ans = "";
		for (int i = 0; i < n / b; i++)	{
			for (int j = 0; j < b; j++)	{
				ans += 'a' + j;
			}
		}
		for (int i = 0; i < n % b; i++)	{
			ans += 'a' + i;
		}
		cout << ans << endl;
    }

    return 0;
}

