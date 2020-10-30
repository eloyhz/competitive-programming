//
// AtCoder Beginner Contest 180 [VIRTUAL]
// C - Cream puff [AC]
// https://atcoder.jp/contests/abc180/tasks/abc180_c
//
// Author: eloyhz
// Date: Oct/29/2020
//

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    set<ll> divs;
    divs.insert(1);
    divs.insert(n);
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            divs.insert(i);
            divs.insert(n / i);
        }
    }
    for (auto it = divs.begin(); it != divs.end(); it++)
        cout << *it << "\n";
    return 0;
}

