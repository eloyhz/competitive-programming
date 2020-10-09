//
// Author: eloyhz
// Date: Oct/09/2020
//
// Codeforces (CF236-D2-B) - Easy Number Challenge
// https://codeforces.com/contest/236/problem/B
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll d(ll n)
{
    ll total = (n == 1) ? 1 : 2;

    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            total++;
            if  (n / i != i) {
                total++;
            }
        }
    }
    return total % (1 << 30);
}

int main()
{
    ll a, b, c, ans = 0;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; ++i)    {
        for (int j = 1; j <= b; ++j)    {
            for (int k = 1; k <= c; ++k)    {
                ans += d(i * j * k);
            }
        }
    }
    cout << ans << endl;
    return 0;
}

