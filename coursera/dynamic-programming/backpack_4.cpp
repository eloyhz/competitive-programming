/*

Coursera - Competitive Programming for Beginners
https://www.coursera.org/learn/competitive-programming-for-beginners/

Week 3: Dynamic Programming
Problem: Backpack 0-1 with costs
Description: https://hackmd.io/@eloyhz/ByZyT7NK_

Date: 20/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;
const int INF = 1e9 + 1;

int main()  {
    int s;  // weight limit
    int n;  // number of bars

    cin >> s >> n;
    vector<int> w(n + 1);   //  weights of the bars
    vector<int> c(n + 1);   //  costs of the bars
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    vector<vector<int>> dp(n + 1, vector<int>(s + 1, -INF));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= s; j++)    {
            if (j - w[i] >= 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + c[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    cout << *max_element(dp[n].begin(), dp[n].end()) << "\n";
    return 0;
}