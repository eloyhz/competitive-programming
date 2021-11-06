#include <bits/stdc++.h>

using namespace std;

int main()  {
    freopen("knight.in", "r", stdin);
    freopen("knight.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> dp(n, vector<int>(m, 0));
    dp[0][0] = 1;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (r >= 2 && c >= 1)
                dp[r][c] += dp[r-2][c-1];
            if (r >= 1 && c >= 2)
                dp[r][c] += dp[r-1][c-2];
        }
    }
    cout << dp[n-1][m-1] << endl;
}