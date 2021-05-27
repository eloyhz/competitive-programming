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

ll madd(ll a, ll b, ll mod)  {
    return ((a % mod) + (b % mod)) % mod;
}

ll mmul(ll a, ll b, ll mod)  {
    return ((a % mod) * (b % mod)) % mod;
}

ll gcd(ll a, ll b) // assume that a is non-negative and b is positive
{
  if (a < b) return gcd(b, a);
  if (b == 0) return a;
  return gcd(b, a % b);
}

pair<ll, ll> extgcd(ll a, ll b) {
  bool swapped = false;
  if (a < b) { 
    swapped = true;
    swap(a, b);
  }
  ll x, y;
  if (b == 0) {
    x = 1;
    y = 0;
  }
  else {
    pair<ll, ll> ans = extgcd(b, a % b);
    ll c = ans.first;
    ll d = ans.second;
    x = d;
    y = c - d * (a / b);
  }
  if (swapped) {
    swap(x, y);
  }
  return {x, y};
}

ll mdiv2(ll a, ll b, ll MOD) {
  ll d = gcd(b, MOD);
  pair<ll, ll> ans = extgcd(b, MOD);
  ll x0 = ans.first;
  // ll y0 = ans.second;
  if (a % d != 0) return -1;  // no solution
  return mmul(a / d, x0, MOD);  // x0 may be negative, so we can't use %
}

int main()  {
    int a, n, m;
    cin >> a >> n >> m;
    ll ans = 0;
    bool found = true;
    for (int i = 1; i <= n; i++)    {
        ll fp = fastpow(a, i, m);
        ll d = mdiv2(i, fp, m);
        if (d == -1)    {
            found = false;
            break;
        }
        ans = madd(ans, d, m);
    }
    cout << (found ? ans : -1) << endl;
    return 0;
}