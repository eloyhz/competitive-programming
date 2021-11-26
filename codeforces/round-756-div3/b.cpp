/**
 * Codeforces Round #756 (Div. 3)
 * B. Team Composition: Programmers and Mathematicians
 * https://codeforces.com/contest/1611/problem/B
 * 
 * @author eloyhz
 * @date 2021-11-25
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()    {
    ll a, b;
    cin >> a >> b;
    ll c = (a + b) / 4;
    cout << min({a, b, c}) << endl;
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
