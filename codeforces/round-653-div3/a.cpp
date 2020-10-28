//
// Codeforces Round #653 (Div. 3) [VIRTUAL]
//
// A. Required Remainder [AC]
// https://codeforces.com/contest/1374/problem/A
//
// Author: eloyhz
// Date: Oct/27/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        int r = n / x;
        while (x * r + y > n)   {
            r--;
        }
        cout << x * r + y << endl;
    }

    return 0;
}

