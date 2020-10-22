// CSES - Minimizing Coins
// https://cses.fi/problemset/task/1634
//
// Author: eloyhz
// Date: oct/22/20
//

#include <bits/stdc++.h>

using namespace std;

int solve(int target, int n, int coins[])  {
    int value[target + 1];
    value[0] = 0;
    for (int x = 1; x <= target; x++)   {
        value[x] = 1e9;
        for (int i = 0; i < n; i++)    {
            int c = coins[i];
            if (x - c >= 0) {
                value[x] = min(value[x], value[x - c] + 1);
            }
        }
    }
    return value[target] == 1e9 ? -1 : value[target];
}

int main()
{
    int n, x;
    cin >> n >> x;
    int c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    cout << solve(x, n, c) << endl;
    return 0;
}
