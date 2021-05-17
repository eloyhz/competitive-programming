/*

Coursera - Dynamic Programming
Problem: Turtle
Description: https://hackmd.io/@eloyhz/rkjQRXeY_

Date: 27/04/2021
  
*/

#include <bits/stdc++.h>

using namespace std;


int main()  {
    int n, m;

    cin >> n >> m;
    int grid[n + 1][m + 1];
    for (int i = 1; i <= n; i++)    {
        for (int j = 1; j <= m; j++)    {
            cin >> grid[i][j];
        }
    }
    int dp[n + 1][m + 1];
    dp[1][1] = grid[1][1];
    // First row
    for (int col = 2; col <= m; col++)
        dp[1][col] = dp[1][col - 1] + grid[1][col];
    // First column
    for (int row = 2; row <= n; row++)
        dp[row][1] = dp[row - 1][1] + grid[row][1];
    for (int i = 2; i <= n; i++)    {
        for (int j = 2; j <= m; j++)    {
            dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + grid[i][j];
        }
    }
    cout << dp[n][m] << "\n";

    return 0;
}