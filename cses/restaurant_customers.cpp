/*

CSES - Restaurant Customers
https://cses.fi/problemset/task/1619
Date: 12/05/21

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> c;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        c.push_back({a, 1});
        c.push_back({b, -1});
    }
    sort(c.begin(), c.end());
    int ans = 0;
    int counter = 0;
    for (auto x : c)    {
        counter += x.second;
        ans = max(ans, counter);
    }
    cout << ans << "\n";

    return 0;
}