// Explanation: https://hackmd.io/@eloyhz/Bk2Jb7XtO

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int s;  // weight limit
    int n;  // amount of bars
    cin >> s >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<bool> previous(s + 1);
    vector<bool> current(s + 1);
//    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
//    dp[0][0] = true;
    previous[0] = true;
    for (int i = 1; i <= n; i++)    {
        for (int w = 0; w <= s; w++)    {
            //dp[i][w] = dp[i - 1][w];
            current[w] = previous[w];
            if (w - a[i] >= 0)  {
                // dp[i][w] = dp[i][w] || dp[i - 1][w - a[i]];
                current[w] = current[w] || previous[w - a[i]];
            }
        }
        for (int k = 0; k <= s; ++k)
            previous[k] = current[k];
    }

    int ans = 0;
    for (int w = s; w >= 0; --w)
        if (current[w])   {
            ans = w;
            break;
        }
    cout << ans << "\n";
    return 0;
}