/*

Coursera - Dynamic Programming
Problem: Ways Of Turtle
Description: https://hackmd.io/@eloyhz/B1OzbulFd

Date: 17/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 9;

int main()  {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n + 1, vector<int>(m + 1, 1));
    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> grid[i][j];
    grid[0][0] = 0;
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)    {
            if (grid[i][j])
                continue;
            int up = grid[i - 1][j];
            int left = grid[i][j - 1];
            int diag = grid[i - 1][j - 1];
            int sum = up + left + diag;
            if (sum == 3)
                continue;
            if (sum == 2)   {
                if (up == 0) dp[i][j] = dp[i - 1][j];
                else if (left == 0) dp[i][j] = dp[i][j - 1];
                else if (diag == 0) dp[i][j] = dp[i - 1][j - 1];
            }
            else if (sum == 1)  {
                if (up == 1) dp[i][j] = (dp[i - 1][j - 1] % mod + dp[i][j - 1] % mod) % mod;
                else if (left == 1) dp[i][j] = (dp[i - 1][j - 1] % mod + dp[i - 1][j] % mod) % mod;
                else if (diag == 1) dp[i][j] = (dp[i - 1][j] % mod + dp[i][j - 1] % mod) % mod;
            }
            else    {
                dp[i][j] = (dp[i - 1][j - 1] % mod + dp[i - 1][j] % mod + dp[i][j - 1] % mod) % mod;
            }
        }
    cout << dp[n][m] % mod << "\n";
/*
    cout << "\n";
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++)
            cout << grid[i][j] << " ";
        cout << "\n";
    }

    cout << "\n";
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++)
            cout << dp[i][j] << " ";
        cout << "\n";
    }
*/
    return 0;
}