/*

CSES - Subarray Sums I

https://cses.fi/problemset/task/1660/
Date: 19/10/21

*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int &ai : a)   {
        cin >> ai;
    }
    int count = 0;
    int i = 0, j = 0;
    ll s = a[0];
    while (i < n && j < n)  {
        if (s == x) {
            count++;
            s -= a[i++];
        }
        else if (s < x && j < n)    {
            s += a[++j];
        }
        else if (s > x) {
            s -= a[i++];
        }
    }
    cout << count << endl;
}

/*

parthiv_360

void solve()
{
    ll n, x, i, j;
    cin >> n >> x;
    cin(a, n);
    map<ll, ll> mp;
 
    ll res = 0;
    mp[0] = 1;
    ll currsum = 0;
 
    rep(i, n)
    {
        currsum += a[i];
        if (mp.find(currsum - x) != mp.end())
            res += mp[currsum - x];
        mp[currsum]++;
    }
    cout << res << endl;
}

*/