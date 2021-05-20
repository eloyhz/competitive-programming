// Explanation: https://hackmd.io/@eloyhz/Bk2Jb7XtO
// Space optimization with 1 vector

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int s;  // weight limit
    int n;  // amount of bars
    cin >> s >> n;
    vector<int> w(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    vector<bool> dp(s + 1);
    dp[0] = true;
    for (int i = 1; i <= n; i++) 
        for (int j = s - w[i]; j >= 0; j--) 
            dp[j + w[i]] = dp[j + w[i]] || dp[j];
    int ans = 0;
    for (int w = s; w >= 0; --w)
        if (dp[w])   {
            ans = w;
            break;
        }
    cout << ans << "\n";
    return 0;
}
