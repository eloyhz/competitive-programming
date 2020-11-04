//
// Codeforces Round #661 (Div. 3) [VIRTUAL]
//
// A. Remove Smallest [AC]
// https://codeforces.com/contest/1399/problem/A
//
// Author: eloyhz
// Date: Nov/04/2020
//

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    bool ok = true;
    for (int i = 0; i < n - 1; i++)
        if (abs(a[i] - a[i + 1]) > 1)   {
            ok = false;
            break;
        }
    cout << (ok ? "YES" : "NO") << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

