// 
// Codeforces Round #674 (Div. 3) [VIRTUAL]
// 
// A. Floor Number
// https://codeforces.com/contest/1426/problem/A
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
        int n, x; cin >> n >> x;
        if (n == 1 || n == 2)
            cout << "1\n";
        else
            cout << 1 + ceil((n - 2.0) / x) << endl;
    }
    return 0;
}

