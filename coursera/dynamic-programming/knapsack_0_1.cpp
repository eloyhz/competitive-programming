// Explanation: https://hackmd.io/@eloyhz/Bk2Jb7XtO

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int s;  // weight limit
    int n;  // amount of bars
    cin >> s >> n;
    vector<int> w(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++)        // rows = bars (items)
        for (int j = 0; j <= s; j++)    {   // columns = weights
            dp[i][j] = dp[i - 1][j];
            if (j - w[i] >= 0)  {
                dp[i][j] = dp[i][j] || dp[i - 1][j - w[i]];
            }
        }
    int ans = 0;
    for (int j = s; j >= 0; --j)
        if (dp[n][j])   {
            ans = j;
            break;
        }
    cout << ans << "\n";
    return 0;
}