// CSES - Coin Combinations I
// https://cses.fi/problemset/task/1635
//
// Author: eloyhz
// Date: oct/22/20
//

#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;

int solve(int target, int n, int coins[])  {
    int count[target + 1];
    memset(count, 0, sizeof count);
    count[0] = 1;
    for (int x = 1; x <= target; x++)   {
        for (int i = 0; i < n; i++)    {
            int c = coins[i];
            if (x - c >= 0) {
                count[x] += count[x - c];
                count[x] %= mod;
            }
        }
    }
    return count[target];
}

int main()
{
    int n, x;   cin >> n >> x;
    int c[n];   for (int i = 0; i < n; i++) cin >> c[i];
    cout << solve(x, n, c) << endl;
    return 0;
}
