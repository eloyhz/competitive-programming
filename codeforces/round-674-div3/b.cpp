// 
// Codeforces Round #674 (Div. 3) [VIRTUAL]
// 
// B. Symmetric Matrix
// https://codeforces.com/contest/1426/problem/B
//
// Author: eloyhz
// Date: Oct/19/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        bool ok = false;
        while (n--) {
            int tile[2][2];
            cin >> tile[0][0] >> tile[0][1];
            cin >> tile[1][0] >> tile[1][1];
            if (tile[1][0] == tile[0][1])
                ok = true;
        }
        if (ok && m % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

