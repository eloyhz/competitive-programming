/*
 * Codeforces Round #753 (Div. 3)
 * B. Odd Grasshopper
 * https://codeforces.com/contest/1607/problem/B
 * 4/11/2021
 * With editorial
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()    {
    ll x0, n;
    cin >> x0 >> n;
    ll values[] = {0, -n, 1, n+1};
    ll d = values[n % 4];
    if (x0 % 2 == 0)
        cout << x0 + d << endl;
    else
        cout << x0 - d << endl;
}

int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
