// CSES - Dice Combinations
// https://cses.fi/problemset/task/1633
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
    int n;
    cin >> n;
    int c[6] = {1, 2, 3, 4, 5, 6};
    cout << solve(n, 6, c) << endl;
    return 0;
}
