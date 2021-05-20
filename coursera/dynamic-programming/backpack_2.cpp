/*

Coursera - Dynamic Programming
Problem: Backpack 3
Description: https://hackmd.io/@eloyhz/B1GVdeNFd

Date: 20/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int s;  // weight limit
    int n;  // amount of bars
    cin >> s >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++)
        for (int w = 0; w <= s; w++)    {
            dp[i][w] = dp[i - 1][w];
            if (w - a[i] >= 0)  {
                dp[i][w] = dp[i][w] || dp[i - 1][w - a[i]];
            }
        }
    int ans = 0;
    for (int w = s; w >= 0; --w)
        if (dp[n][w])   {
            ans = w;
            break;
        }
    vector<int> sol;
    int w = ans;
    for (int i = n; i >= 1; --i)    {
        if (w - a[i] >= 0 && dp[i - 1][w - a[i]])   {
            sol.push_back(i);
            w -= a[i];
        }
    }
    cout << ans << " " << sol.size() << "\n";
    for (int i = sol.size() - 1; i >= 0; --i)
        cout << sol[i] << " ";
    cout << "\n";
    
    return 0;
}