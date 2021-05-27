/*

CSES - Exponentiation II
https://cses.fi/problemset/task/1095
Date: 27/05/21

Reference: https://www.geeksforgeeks.org/find-power-power-mod-prime/

*/


#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll fastpow(ll base, ll exp, ll mod)  {
    if (exp == 0)
        return 1;
    if (exp % 2 == 1)
        return ((base % mod) * fastpow(base, exp - 1, mod)) % mod;
    ll tmp = fastpow(base, exp / 2, mod);
    return (tmp * tmp) % mod;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b, c;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        cout << fastpow(a, fastpow(b, c, MOD - 1), MOD) << "\n";
    }
    return 0;
}