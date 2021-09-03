// Codeforces Round #702 (Div. 3)
// B. Balanced Remainders [WA]
// https://codeforces.com/contest/1490/problem/B
// 03-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> c(3);
    for (int i = 0; i < n; ++i)
        c[a[i] % 3]++;
    int ans = 0;
    int m = n / 3;
    int imax = -1;
    for (int i = 0; i < 3; i++)
        if (c[i] > m && imax < 0)
            imax = i;
    if (imax < 0)
        cout << 0 << "\n";
    else    {
        ans += c[imax] - m;
        c[(imax + 1) % 3] += c[imax] - m;
        imax = (imax + 1) % 3;
        if (c[imax] > m)
            ans += c[imax] - m;
        cout << ans << "\n";
    }
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
