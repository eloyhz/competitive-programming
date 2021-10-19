/*
 *
 * Training Camp Argentina - 2021
 * Contest #2 - B. DZY Loves Chemistry [WA]
 * https://codeforces.com/group/gXivUSZQpn/contest/337396/problem/B
 * 18/10/21
 * 
 */

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    for (auto &x : v)   {
        cin >> x.first >> x.second;
    }
    sort(v.begin(), v.end());
    unordered_set<int> s;
    long long ans = 1;
    if (m > 0)  {
        s.insert(v[0].first);
        s.insert(v[0].second);
        ans *= 2;
        for (int i = 1; i < n; i++) {
            if (s.count(v[i].first) > 0 || s.count(v[i].second) > 0)    {
                ans *= 2;
            }
            s.insert(v[i].first);
            s.insert(v[i].second);

        }
    }
    cout << ans << endl;
}

int main()  {
    solve();
}