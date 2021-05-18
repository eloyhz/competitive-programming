/*

Coursera - Dynamic Programming
Problem: Turtle With Answer
Description: https://hackmd.io/@eloyhz/r1VHxDWtO

Date: 18/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 1;

int main()  {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n + 1, vector<int>(m + 1));
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INF));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> grid[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + grid[i][j];
    vector<pair<int, int>> path;
    int i = n, j = m;
    while (i > 0 || j > 0)  {
        path.push_back({i, j});
        if (dp[i - 1][j] + grid[i][j] == dp[i][j])
            i--;
        else if (dp[i][j - 1] + grid[i][j] == dp[i][j])
            j--;
        else    {
            i--;
            j--;
        }
    }
    cout << dp[n][m] << " " << path.size() << "\n";
    for (int i = path.size() - 1; i >= 0; i--)
        cout << path[i].first << " " << path[i].second << "\n";
    return 0;
}