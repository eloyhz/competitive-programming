// Codeforces (CF439-D2-B) - Devu, the Dumb Guy [AC]
// https://codeforces.com/contest/439/problem/B
// Date: 01/06/21
// 

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    sort(c.begin(), c.end());
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (long long)x * (long long)c[i];
        if (x > 1)
            x--;
    }
    cout << ans << "\n";
    return 0;
}
