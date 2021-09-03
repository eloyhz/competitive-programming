// Codeforces Round #702 (Div. 3)
// A. Dense Array [AC]
// https://codeforces.com/contest/1490/problem/A
// 03-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        if ((float)max(a[i], a[i + 1]) / min(a[i], a[i + 1]) > 2.0)  {
            int pmin = min(a[i], a[i + 1]);
            int pmax = max(a[i], a[i + 1]);
            while ((float)pmax / pmin > 2.0f) {
                pmin *= 2;
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
