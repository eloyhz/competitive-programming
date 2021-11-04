/*
 * Codeforces Round #753 (Div. 3)
 * C. Minimum Extraction
 * https://codeforces.com/contest/1607/problem/C
 * 4/11/2021
 * With editorial
 */


#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()    {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    int ans = a[0];
    for (int i = 1; i < n; i++)
            ans = max(ans, abs(a[i] - a[i - 1]));
    cout << ans << endl;
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
