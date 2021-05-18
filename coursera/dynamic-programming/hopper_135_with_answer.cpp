/*

Coursera - Dynamic Programming
Problem: Hopper 135 With Answer
Description: https://hackmd.io/@eloyhz/HkxstwbKu

Date: 18/05/2021
  
*/


#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<long long> dp(n + 1);
    dp[0] = 0;
    dp[1] = a[1];
    for (int i = 2; i <= n; i++) {
        long long best = dp[i - 1];
        if (i - 3 >= 0)
            best = max(best, dp[i - 3]);
        if (i - 5 >= 0)
            best = max(best, dp[i - 5]);
        dp[i] = best + a[i];
    }
    vector<int> path;
    int i = n;
    while (i > 0)   {
        path.push_back(i);
        if (dp[i] == dp[i - 1] + a[i])
            i--;
        else if (i - 3 >= 0 && dp[i] == dp[i - 3] + a[i])
            i -= 3;
        else if (i - 5 >= 0 && dp[i] == dp[i - 5] + a[i])
            i -= 5;
    }
/*    cout << "dp = [";
    for (int x : dp) 
        cout << x << " ";
    cout << "]\n";
*/
    cout << dp[n] << " " << path.size() << "\n";
    for (int i = path.size() - 1; i >= 0; --i)
        cout << path[i] << " ";
    cout << "\n";
    return 0;
}
