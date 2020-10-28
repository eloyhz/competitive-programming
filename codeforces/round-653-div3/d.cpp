//
// Codeforces Round #653 (Div. 3) [VIRTUAL]
//
// D. Zero Remainder Array [WA]
// https://codeforces.com/contest/1374/problem/D
//
// Author: eloyhz
// Date: Oct/27/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % k == 0) continue;
            int p = a[i] / k;
            int r = (k * (p + 1)) - a[i];
            mp[r]++;
            if (mp[r] > 1)  {
                r += k * (mp[r] - 1);
            }
            ans = max(ans, r);
        }
        cout << (ans == 0 ? 0 : ans + 1) << endl;
    }
    return 0;
}

