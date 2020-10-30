//
// AtCoder Beginner Contest 180 [VIRTUAL]
// D - Takahashi Unevolved [AC w/editorial]
// https://atcoder.jp/contests/abc180/tasks/abc180_d
//
// Author: eloyhz
// Date: Oct/29/2020
//

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll exp = 0;
    ll str = x;
    while ((double)str * a < 2e18 && str * a < y && str * a <= str + b) {
        str *= a;
        exp++;
    }
    exp += (y - str - 1) / b;
    cout << exp << endl;

    return 0;
}

