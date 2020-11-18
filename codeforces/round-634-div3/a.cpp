//
// Codeforces Round #634 (Div. 3) [VIRTUAL]
//
// A. Candies and Two Sisters [AC]
// https://codeforces.com/contest/1335/problem/A
//
// Author: eloyhz
// Date: Nov/18/2020
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
		int n;
		cin >> n;
		cout << (n > 2 ? (n - 1) / 2 : 0) << endl;
    }

    return 0;
}

