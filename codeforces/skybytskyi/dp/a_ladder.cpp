#include <bits/stdc++.h>

using namespace std;

int main()  {
    freopen("ladder.in", "r", stdin);
    freopen("ladder.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = a[0];
    for (int i = 2; i <= n; i++)
        dp[i] = a[i - 1] + max(dp[i - 1], dp[i - 2]);
    cout << dp[n] << endl;
}