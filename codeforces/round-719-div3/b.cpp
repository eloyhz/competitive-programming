// Codeforces Round #719 (Div. 3)
// B. Ordinary Numbers [AC]
// https://codeforces.com/contest/1520/problem/B
// 01-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    long long n;
    cin >> n;
    int digits = 0;
    long long m = n;
    while (m >= 10)   {
        digits++;
        m /= 10;
    }
    long long ans = digits * 9 + m - 1;
    long long p = m;
    long long q = 10;
    for (int i = 0; i < digits; i++)    {
        m += p * q;
        q *= 10;
    }
    if (n >= m)
        ans++;
    cout << ans << endl;
}

int main()  {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
