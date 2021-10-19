/*
 *
 * Training Camp Argentina - 2021
 * Contest #2 - K. Chores
 * https://codeforces.com/group/gXivUSZQpn/contest/337396/problem/K
 * 18/10/21
 * 
 */

#include <bits/stdc++.h>

using namespace std;
#define DBG(x) cerr << #x << " = " << (x) << endl

void solve()    {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> h(n);
    for (auto &x : h)
        cin >> x;
    sort(h.rbegin(), h.rend());
    int x = h[a - 1] - 1;
    if (h[a] > x)
        cout << 0 << endl;
    else
        cout << x - h[a] + 1 << endl;
}

int main()  {
    solve();
}