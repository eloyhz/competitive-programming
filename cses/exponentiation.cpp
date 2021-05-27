/*

CSES - Exponentiation
https://cses.fi/problemset/task/1095
Date: 26/05/21

*/


#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll fastpow(ll base, ll exp, ll mod)  {
    if (exp == 0)
        return 1;
    if (exp % 2 == 1)
        return (base * fastpow(base, exp - 1, mod)) % mod;
    ll tmp = fastpow(base, exp / 2, mod);
    return (tmp * tmp) % mod;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << fastpow(a, b, MOD) << "\n";
    }
    return 0;
}