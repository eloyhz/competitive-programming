//
// Author: eloyhz
// Date: Oct/13/2020
//
// Codeforces (CF584-D2-B) - Kolya and Tanya
// https://codeforces.com/contest/584/problem/B
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll modpow(int x, int n, int m)
{
    if (n == 0) {
        return 1 % m;
    }
    ll u = modpow(x, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1) {
        u = (u * x) % m;
    }
    return u;
}


int main()
{
    int n;
    int mod = 1e9 + 7;

    cin >> n;
    ll x = (modpow(3, 3 * n, mod) - modpow(7, n, mod)) % mod;
    if (x < 0)  {
        x += mod;
    }
    cout << x << endl;

    return 0;
}

