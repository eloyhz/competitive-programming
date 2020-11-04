//
// Codeforces Round #661 (Div. 3) [VIRTUAL]
//
// B. Gifts Fixing [AC]
// https://codeforces.com/contest/1399/problem/B
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
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int min_a = *min_element(a, a + n);
    int min_b = *min_element(b, b + n);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int dif_a = a[i] - min_a;
        int dif_b = b[i] - min_b;
        ans += min(dif_a, dif_b) + abs(dif_a - dif_b);
        // From editorial:
        // ans += max(dif_a, dif_b);
    }
    cout << ans << endl;
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

