/*
 *
 * ITMO Academy - Two Pointers Method - Part 2
 * F. Segments with Small Spread (O(n log n) multisets)
 * https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
 * 26-10-2021
 * 
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n;
ll k;
vector<ll> a;
multiset<ll> st;

void add(ll x)  {
    st.insert(x);
}

void remove(ll x)   {
    st.erase(st.find(x));
}

bool good() {
    ll mx = *(--st.end());
    ll mn = *(st.begin());
    return (mx - mn) <= k;
}

int main()  {
    // good segment: difference between the maximum and minimum
    //               is at most k
    //              max(a[i]) - min(a[i]) <= k, i \in [l..r]
    //              calculate max and min in O(n log n)
    // find the number of good segments
    // 
    cin >> n >> k;
    a.resize(n);
    for (ll &x : a)
        cin >> x;
    ll ans = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        add(a[r]);
        while (!good()) {
            remove(a[l]);
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << endl;
}
