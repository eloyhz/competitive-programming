// 
// Codeforces Round #674 (Div. 3) [VIRTUAL]
//
// C. Increase and Copy
// https://codeforces.com/contest/1426/problem/C
//
// Author: eloyhz
// Date: Oct/19/2020
//

#include <bits/stdc++.h>

using namespace std;

int solve(int n)    {
    double a = floor(sqrt(n));
    if (a * a >= n) 
        return a * 2 - 2;
    else if (a * (a + 1) >= n)  
        return a * 2 - 1;
    else
        return a * 2;
}

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}

