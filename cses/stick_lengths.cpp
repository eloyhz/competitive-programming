/*

CSES - Stick Lengths
https://cses.fi/problemset/task/1074
Date: 13/05/21

*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p.begin(), p.end());
    long long ans = 0;
    int middle = p[n / 2];
    for (int x : p)
        ans += abs(x - middle);
    cout << ans << "\n";
    return 0;
}