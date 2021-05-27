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

ll madd(ll a, ll b, ll mod)  {
    return ((a % mod) + (b % mod)) % mod;
}

ll msub(ll a, ll b, ll mod)  {
    ll tmp = ((a % mod) - (b % mod)) % mod;
    if (tmp < 0)
        tmp = (tmp + mod) % mod;
    return tmp;
}

ll mmul(ll a, ll b, ll mod)  {
    return ((a % mod) * (b % mod)) % mod;
}

ll mdiv(ll a, ll b, ll pmod)  {
    return mmul(a, fastpow(b, pmod - 2, pmod), pmod);
}


int main()  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ad = mmul(a, d, MOD);
    int bc = mmul(b, c, MOD);
    int bd = mmul(b, d, MOD);
    cout << mdiv(madd(ad, bc, MOD), bd, MOD) << endl;
    return 0;
}