#include <bits/stdc++.h>

using namespace std;

const int MAX = 101;

int dp[MAX];
int ladder[MAX];

int solve(int n)    {
    if (n <= 0)
        return 0;
    int &ans = dp[n];
    if (ans == -1)  {
        ans = ladder[n] + max(solve(n-1), solve(n-2));
    }
    return ans;
}

int main()  {
    freopen("ladder.in", "r", stdin);
    freopen("ladder.out", "w", stdout);

    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> ladder[i];
    cout << solve(n) << endl;
}