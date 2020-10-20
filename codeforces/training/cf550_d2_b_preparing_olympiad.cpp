//
// Author: eloyhz
// Date: Oct/20/2020
//
// Codeforces (CF550-D2-B) - Preparing Olympiad
// https://codeforces.com/contest/550/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0, min_dif = 1e6+1, max_dif = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i))   {
                sum += c[i];
                min_dif = min(min_dif, c[i]);
                max_dif = max(max_dif, c[i]);
            }
        }
        if (sum >= l && sum <= r && max_dif - min_dif >= x) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}

