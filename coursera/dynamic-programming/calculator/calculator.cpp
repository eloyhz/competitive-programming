#include <bits/stdc++.h>

using namespace std;

/*
#define MAX 1000001

int memo[MAX];

int solve_rec(int x)	{
	if (x == 1) return 0;
	if (memo[x] > 0) return memo[x];
	int ans = INT_MAX;
	if (x % 2 == 0)	{
		ans = min(ans, solve_rec(x / 2) + 1);
	}
	if (x % 3 == 0)	{
		ans = min(ans, solve_rec(x / 3) + 1);
	}
    ans = min(ans, solve_rec(x - 1) + 1);
	memo[x] = ans;
	return ans;
}
*/

int solve(int n)	{
    int dp[n + 1];
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for (int i = 4; i <= n; i++)    {
        int dp1 = dp[i - 1];
        int dp2 = (i % 2 == 0) ? dp[i / 2] : INT_MAX;
        int dp3 = (i % 3 == 0) ? dp[i / 3] : INT_MAX;
        dp[i] = min(dp1, min(dp2, dp3)) + 1;
    }
    return dp[n];
}

int main()	{
	int n;
	cin >> n;

	cout << solve(n) << "\n";
	return 0;
}
