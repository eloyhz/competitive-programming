/*

omegaUp 2846 - Chocolates CIIC 2015
https://omegaup.com/arena/problem/Chocolates-CIIC-2015

Fecha: 30/04/2021

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool can_eat(vector<int> c, ll amount)  {
    if (amount > c[0])
        return false;
    ll s = c[0] - amount;
    int n = c.size();
    for (int i = 1; i < n; i++)  {
        s += c[i];
        if (amount > s)
            return false;
        s -= amount;    
    }
    return true;
}

ll solve(vector<int> c)    {
    ll low = 0, high = 1000000001;

    while (high - low > 1) {
        ll mid = (low + high) / 2;
        if (can_eat(c, mid))
            low = mid;
        else
            high = mid;
    }
    return low;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    cout << solve(c) << "\n";
    return 0;
}