/*

CSES - Concert Tickets
https://cses.fi/problemset/task/1091
Date: 12/05/21

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> h;
    for (int i = 0; i < n; i++) {
        int hi;
        cin >> hi;
        h.insert(hi);
    }
    while (m--) {
        int ti;
        cin >> ti;
        auto x = h.lower_bound(ti);
        if (x == h.end())
            cout << "-1\n";
        else    {
            cout << *x << "\n";
            h.erase(x);
        }
    }
    
    return 0;
}