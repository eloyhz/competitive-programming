//
// Author: eloyhz
// Date: Oct/14/2020
//
// Codeforces (CF544-D2-B) - Sea and Islands
// https://codeforces.com/contest/544/problem/B
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;
    int max_k;
    if (n % 2 == 0) {
        max_k = n * n / 2;
    }
    else    {
        int half = n / 2;
        max_k = half * half + (half + 1) * (half + 1);
    }
    if (k == 0) {
        cout << "YES\nS\n";
    }
    else if (k > max_k)  {
        cout << "NO\n";
    }
    else    {
        bool island;
        bool map[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                map[i][j] = false;
            }
        }
        for (int i = 0; i < n; i++) {
            island = (i % 2 == 0) ? true : false;
            for (int j = 0; j < n; j++) {
                map[i][j] = island;
                if (island && --k == 0)    {
                    break;
                }
                island = !island;
            }
            if (k == 0) {
                break;
            }
        }
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (map[i][j] ? 'L' : 'S');
            }
            cout << "\n";
        }
    }
    return 0;
}

