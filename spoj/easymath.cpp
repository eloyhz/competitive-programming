// SPOJ - EASYMATH
// https://www.spoj.com/problems/EASYMATH/
//
// Author: eloyhz
// Date: Sep/10/2020
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
  return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)  {
  return a * b / gcd(a, b);
}

ll solve(ll n, ll p[5]) {
  ll sum = 0;
  for (int msk = 0; msk < (1 << 5); msk++)  {
    ll mult = 1;
    ll bits = 0;
    for (int i = 0; i < 5; i++) {
      if (msk & (1 << i)) {
        bits++;
        mult = lcm(mult, p[i]);
      }
    }
    if (bits == 0)  {
      continue;
    }
    ll cur = n / mult;
    if (bits % 2 == 1)  {
      sum += cur;
    }
    else  {
      sum -= cur;
    }
  }
  return n - sum;
}

int main() {
  ll t, n, m, a, d, p[5];

  cin >> t;
  while (t--) {
    cin >> n >> m >> a >> d;
    for (int i = 0; i < 5; i++) {
      p[i] = a + i * d;
    }
    cout << solve(m, p) - solve(n - 1, p) << endl;
  }
  return 0;
}

