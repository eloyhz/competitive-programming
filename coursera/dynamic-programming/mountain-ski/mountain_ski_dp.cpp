
/*

Coursera - Dynamic Programming
Problem: Mountain Ski
Description: https://hackmd.io/@eloyhz/BkVGdVeY_

Date: 17/05/2021
  
*/



#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, i, j;

    cin >> n;
    int a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++)    {
            cin >> a[i][j];
        }
    }
    int dp[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = 0;
    dp[0][0] = a[0][0];
    for (int i = 1; i < n; i++)
        for (int j = 0; j <= i; j++)
            if (j == 0)
                dp[i][j] = dp[i - 1][j] + a[i][j];
            else if (i == j)
                dp[i][j] = dp[i - 1][j - 1] + a[i][j];
            else
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
    int best = INT_MIN;
    for (int j = 0; j < n; j++)
        best = max(best, dp[n - 1][j]);
    cout << best << "\n";
    return 0;
}

