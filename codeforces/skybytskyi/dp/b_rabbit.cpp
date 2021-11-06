/*
 * Dynamic Programming Training
 * 
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main()  {
    freopen("lepus.in", "r", stdin);
    freopen("lepus.out", "w", stdout);

    int n;
    cin >> n;
    string w;
    cin >> w;
    vector<int> dp(n, -1);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        if (w[i] == 'w')
            continue;
        if (i >= 1 && dp[i-1] != -1)
            dp[i] = max(dp[i], dp[i-1] + (w[i] == '"'));
        if (i >= 3 && dp[i-3] != -1)
            dp[i] = max(dp[i], dp[i-3] + (w[i] == '"'));
        if (i >= 5 && dp[i-5] != -1)
            dp[i] = max(dp[i], dp[i-5] + (w[i] == '"'));
    }
    cout << dp[n-1] << endl;
}