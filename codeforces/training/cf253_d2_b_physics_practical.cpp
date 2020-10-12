//
// Author: eloyhz
// Date: Oct/12/2020
//
// Codeforces (CF253-D2-B) - Physics Practical
// https://codeforces.com/contest/253/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int MAX = 5000;
    int n;

    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin >> n;
    int c[MAX + 1];
    fill(c, c + MAX + 1, 0);
    for (int i = 0; i < n; i++) {
        int ci; cin >> ci;
        c[ci]++;
    }
    int ans = INT_MAX;
    for (int m = 1; m <= MAX; ++m) {
        int count = 0;
        for (int k = 1; k < m; ++k) {
            count += c[k];
        }
        for (int k = 2 * m + 1; k <= MAX; ++k)  {
            count += c[k];
        }
        ans = min(ans, count);
    }
    cout << ans << "\n";
    return 0;
}

