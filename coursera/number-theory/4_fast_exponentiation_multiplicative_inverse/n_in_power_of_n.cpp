/*

Coursera - Competitive Programming for Beginners
https://www.coursera.org/learn/competitive-programming-for-beginners/

Week 2: Number Theory
Section 4: Fast Exponentiation, Multiplicative Inverse
Problem: N in power of N
Description: https://hackmd.io/@eloyhz/By-II86Fu

Date: 27/05/2021
  
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll fastpow(ll base, ll exp, ll mod)  {
    if (exp == 0)
        return 1;
    if (exp % 2 == 1)
        return (base * fastpow(base, exp - 1, mod)) % mod;
    ll tmp = fastpow(base, exp / 2, mod);
    return (tmp * tmp) % mod;
}

int main()  {
    int n, m;
    cin >> n >> m;
    cout << fastpow(n, n, m) << endl;
    return 0;
}