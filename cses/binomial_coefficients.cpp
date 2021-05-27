/*

CSES - Binomial Coefficients
https://cses.fi/problemset/task/1079/
Date: 26/05/21

*/


#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 1e6;
typedef long long ll;

vector<ll> fact(MAX + 1, -1);

ll factorial(ll n)   {
    if (fact[n] != -1) 
        return fact[n];
    if (n == 0 || n == 1)
        fact[n] = 1;
    if (fact[n] == -1)
        fact[n] = (n % MOD) * (factorial(n - 1) % MOD) % MOD;
    return fact[n];
}

ll msub(ll a, ll b)  {
    return ((a % MOD) - (b % MOD)) % MOD;
}

ll mmul(ll a, ll b)  {
    return ((a % MOD) * (b % MOD)) % MOD;
}

ll mpow(ll base, ll exp) {
    if (exp == 0) 
        return 1;
    if (exp % 2 == 1)
        return (base * mpow(base, exp - 1)) % MOD;
    ll tmp = mpow(base, exp / 2);
    return (tmp * tmp) % MOD;
}

ll mdiv(ll a, ll b)  {
    return mmul(a, mpow(b, MOD - 2));
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        ll fa = factorial(a);
        ll fb = factorial(b);
        ll fab = factorial(msub(a, b));
        ll ans = mdiv(fa, mmul(fb, fab));
        cout << ans << "\n";
    }
    return 0;
}
