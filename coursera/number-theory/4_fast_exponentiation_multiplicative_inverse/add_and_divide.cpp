/*

Coursera - Competitive Programming for Beginners
https://www.coursera.org/learn/competitive-programming-for-beginners/

Week 2: Number Theory
Section 4: Fast Exponentiation, Multiplicative Inverse
Problem: Add and Divide
Description: https://hackmd.io/@eloyhz/ry7oMLpK_

Date: 27/05/2021
  
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

ll norm(ll d, ll mod)   {
    return ((d % mod) + mod) % mod;
}

ll madd(ll a, ll b, ll mod)  {
    return (norm(a, mod) + norm(b, mod)) % mod;
}

ll msub(ll a, ll b, ll mod)  {
    return (norm(a, mod) - norm(b, mod)) % mod;
}

ll mmul(ll a, ll b, ll mod)  {
    return (norm(a, mod) * norm(b, mod)) % mod;
}

ll mdiv(ll a, ll b, ll pmod)  {
    return mmul(norm(a, pmod), fastpow(norm(b, pmod), pmod - 2, pmod), pmod);
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